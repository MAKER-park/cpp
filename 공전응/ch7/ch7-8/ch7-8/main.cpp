//
//  main.cpp
//  ch7-8
//  Created by 박재완 on 2021/05/10.
//
#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle(int radius=0) { this->radius = radius; }
    void show() { cout << "radius = " << radius << " 인 원" << endl; }
    //friend 선언
    friend Circle operator ++ (Circle & c);
    friend Circle operator ++ (Circle & c, int ab );//중복 선언 구분을 위한 인자 추가
};
Circle operator++(Circle& c){ //전위
    c.radius++;
    return c;
}
Circle operator++(Circle& c, int ab){//후위
    Circle test = c; //처음 메모리는 유지
    c.radius++;//그다음 증감
    return test;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    Circle a(5), b(4);
    ++a; // 반지름을 1 증가 시킨다. 후위 연산자
    b = a++; // 반지름을 1 증가 시킨다. 전치 연산자
    a.show();
    b.show();
    return 0;}
