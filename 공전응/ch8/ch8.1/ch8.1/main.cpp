//  main.cpp
//  ch8.1
//  Created by 박재완 on 2021/05/19.
#include <iostream>
using namespace std;
class Circle{ //기본적으로 제공되는 클래스
    int radius;
public:
    Circle(int radius=0) { this->radius = radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14*radius*radius; }
};

class NamedCircle : public Circle{// namedcircele  클래스 선언
    string name;
public:
    NamedCircle(int radius, string name){// 변수와 이름을 받는 함수 선언
        setRadius(radius);
        this->name = name;
    }
    void show() {
        cout << "반지름이 " << getRadius() << "인 " << this->name << endl;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    //다음 코드가 실행되어야 한다.
    NamedCircle waffle(3, "waffle"); // 반지름이 3이고 이름이 waffle인 원
    waffle.show();
    return 0;
}
