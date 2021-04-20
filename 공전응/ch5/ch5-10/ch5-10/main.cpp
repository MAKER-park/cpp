//
//  main.cpp
//  ch5-10
//
//  Created by 박재완 on 2021/04/20.
#include<iostream>
#include<string>
using namespace std;
 
class Buffer{//클래스 생성
    string text;
public:
    Buffer(string text) { this->text = text; }
    void add(string next) { text += next; } // text에 next 문자열 덧붙이기
    void print() { cout << text << endl; }//문자열 출력
};
 
Buffer& append(Buffer& s, string g){//참조 호출
    s.add(g);
    return s;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    Buffer buf("Hello");
    Buffer& temp = append(buf, "Guys"); // buf의 문자열에 "Guys" 덧붙임
    temp.print(); // "HelloGuys" 출력
    buf.print(); // "HelloGuys" 출력
    return 0;
}
