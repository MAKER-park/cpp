//
//  main.cpp
//  ch7-4
//
//  Created by 박재완 on 2021/05/10.
#include <iostream>
#include <string>
using namespace std;
class Book{
    string title;
    int price, pages;
public:
    Book(string title="", int price=0, int pages=0){
        this->title = title; this->price = price; this->pages = pages;
    }
    void show() {
        cout << title << " " << price << "원 " << pages << " 페이지" << endl;
    }
    string getTitle() {
        return title;
    }
    //friend 선언 문단 + 객체 사용 구문
    //friend 선언문 요청 문제 이므로 추가
    friend bool operator< (string b, Book& a);//문자열 객체 값 받아오는 함수
};

bool operator<(string b, Book& a){
    //cout << (int)b[0] << " , " << int(a.getTitle()[0]) << endl;
    if(b < a.title){//아스키 코드 크기 비교 더 작을 경우 뒤에 있는 것으로 판단
        return true;
    }//a객체 제목, 문자열 b 의 데이터 비교 아스키 코드상 b 문자열의 아스키가 크다면
    return false;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    setlocale(LC_ALL, "");
    Book a("청춘" , 20000, 300); //a 객체애 대한 정보 입력
    string b;
    cout << "책 이름을 입력하세요>>";
    getline(cin, b); //키보드로부터 문자열로 책 이름을 입력 받음
    if(b < a){
        cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
    }
   
    return 0;
}
