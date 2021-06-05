//  main.cpp
//  ch9.4
//  Created by 박재완 on 2021/05/26.
#include <iostream>
#include <string>//string 헤더 선언
using namespace std;
//제공된 추상 클래스 loopAdder
class LoopAdder {
    string name;
    int x, y, sum;
    void read();
    void write();
protected :
    LoopAdder( string name="") {
        this->name = name;
    }
    int getX() { return x; }
    int getY() { return y; }
    virtual int calculate() = 0;
public :
    void run();
};

void LoopAdder::read() {
    cout << name << ":" << endl;
    cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >> ";
    cin >> x >> y;
}
void LoopAdder::write() {
    cout << x << "에서 " << y << "까지의 합 = " << sum << " 입니다" << endl;
}
void LoopAdder::run() {
    read();
    sum = calculate();
    write();
}
//클래스 작성
class WhileLoopAdder : public LoopAdder {
public :
    WhileLoopAdder(string name) : LoopAdder(name){;}
    int calculate() {
        int sum=0;
        int x = getX();
        while( x <= getY() ) {// y까지 반복문 진행 while loop
            sum += x;//y까지의 합 계산
            x++;
        }
        return sum;// 합계 반환
    }
};
class DoWhileLoopAdder : public LoopAdder {
public :
    DoWhileLoopAdder(string name) : LoopAdder(name){;}
    int calculate() {
        int sum=0;
        int x = getX();
        do { // do - while
            sum += x;
            x++;
        } while( x <= getY() );
        return sum;
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
    WhileLoopAdder whileLoop("While Loop");
    DoWhileLoopAdder doWhileLoop("Do while Loop");
    whileLoop.run();
    doWhileLoop.run();
    return 0;}
