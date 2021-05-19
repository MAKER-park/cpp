//  ch8.3
//  Created by 박재완 on 2021/05/19.
#include <iostream>
using namespace std;
class Point { // 기본 제공 소스 코드
    int x,y;
public:
    Point(){};// point 생성시 인라인 맴버 선언 필요 기본생성자 에러 발견!!
    Point(int x, int y) { this->x = x; this->y = y; }
    int getX(){ return x; }
    int getY(){ return y; }
protected:
    void move(int x, int y) { this->x = x; this->y = y; }
};
class ColorPoint : public Point {
    string color;
public:
    ColorPoint(int x, int y, string color){
        Point(x, y);
        this -> color = color;
    }
    void setPoint(int x, int y){move(x, y);}
    void setColor(string color){this -> color = color;}
    void show(){
        cout << color << "색으로 (" << getX() << "," << getY() << ")에 위치한 점입니다." << endl;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here... 실행을 원하는 메인문 코드
    ColorPoint cp(5, 5, "RED"); cp.setPoint(10, 20); cp.setColor("BLUE"); cp.show();
    return 0;
}
