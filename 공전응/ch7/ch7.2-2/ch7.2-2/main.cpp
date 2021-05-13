//
//  main.cpp
//  ch7.2-2
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
    friend bool operator== (Book &b, int a);
    friend bool operator== (Book &b, string a);
    friend bool operator== (Book&b, Book&a);
};

bool operator==(Book &b, int a){if(b.price == a){return true;}return false;}// 가격의 일치 여부 b객체의 대한 가격 정보 일치로 변경됨

bool operator==(Book& b,string a){if(b.title == a){return true;}return false;}// 이름의 일치 여부 b객체의 이름과 일치 여부 확인

bool operator==(Book& b, Book& a){if(b.price == a.price && b.title == a.title){return true;}return false;} //모든 정보값에 대한 구문 비교 and 연산자 사용 객체에 대한 접근 선언 으로 this 구문 삭제

int main(int argc, const char * argv[]) {
    // insert code here...
    Book a("명품 C++" , 30000, 500), b("고품 C++", 30000, 500); //a ,b 항목에 각각 정보 입력 객체 선언
    if(a == 30000) cout << "정가 30000원" << endl; //  가격 비교 입력값과 선언 값이 맞는 지 판단하는 연산자 함수
    if(a == "명품 C++") cout << "명품 C++ 입니다." << endl; // 책 title 비교 맞을 경우 명품 c++입니다 출력 아니면 공백을 출력하는 연산자 함수
    if(a == b) cout << "두 책이 같은 책입니다." << endl;  // title, price, pages 모두 비교 두책의 데이터가 같은지 확인하는 연산자 함수
    return 0;
}
