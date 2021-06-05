//  main.cpp
//  ch9.6
//  Created by 박재완 on 2021/05/26.
#include <iostream>
#include <string>
using namespace std;
//제공된 스택 클래스
class AbstractStack {
public :
    virtual bool push(int n) = 0;
    virtual bool pop(int& n) = 0;
    virtual int size() = 0;
};

class IntStack : public AbstractStack {//후입선출
    int* stack;
    int top;
    int max;
public :
    IntStack(int n){ stack = new int[n]; max = n;  top=-1; }
    bool pop(int& n) { // stack  값 제거
        if( top < 0 ) {return false;}
        else {
        n = stack[top];// 가장 나중에 들어온 stack  값 제거
        top--;
        return true;
        }
    }
    
    bool push(int n) {// stack 값 입력
        if( top == max ) {return false;}
        else {
        top++;
        stack[top] = n;
        return true;
        }
    }
    int size() {
        return top+1;
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
    IntStack intstack(50);
    int re;
    for( int i = 0 ; i <=5 ; i++){// 반복문 이용
        intstack.push(i); //push로  0 ~ 5 까지 순서 대로 입력
    };
    cout << "현재 원소 개수 : " << intstack.size() << "개" << endl; // 사이즈 출력
    for( int i = 0 ; i <= 5 ; i++){// 반복문 이용
        intstack.pop(re);
        cout << "pop : " << re << endl;
    };
    cout << "현재 원소 개수 : " << intstack.size() << "개" << endl;
    return 0;
}
