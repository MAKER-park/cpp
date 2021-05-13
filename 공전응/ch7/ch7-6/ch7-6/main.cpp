//
//  main.cpp
//  ch7-6
//
//  Created by 박재완 on 2021/05/10.
//

#include <iostream>

using namespace std;

class Matrix {
    int num[4];
public:
    Matrix(){;}
    Matrix(int a, int b, int c, int d){
        num[0] = a; num[1] = b; num[2] = c; num[3] = d;
    };
    //필요 함수 및 연산자 선언
    void show();
    Matrix operator+ (Matrix b);
    Matrix operator+= (Matrix &b);
    bool operator== (Matrix b);
};
Matrix Matrix::operator + (Matrix b){
    Matrix t;
    for(int i=0; i<4; i++){t.num[i] = num[i] + b.num[i];} // 각 행렬 합
    return t;
}
 
Matrix Matrix::operator+= (Matrix &b){
    for(int i=0; i<4; i++){num[i] += b.num[i];}//각 행렬 합
    return *this;
}
 
bool Matrix::operator== (Matrix c){
    int cnt = 0 ;
    for(int i=0; i<4; i++){if(num[i] != c.num[i]){cnt++;}}
    if(cnt == 0){return true;}else{return false;}//일치 여부 카운트 숫자가 0이 아니면 false 0이면 true 반환
}

void Matrix::show(){//show 함수
    cout << "Matrix = { ";
    for(int i=0; i<4; i++){
        cout << this->num[i] << ' ';
    }
    cout << "}" << endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    Matrix a(1,2,3,4), b(2,3,4,5), c;
    c = a + b;
    a += b;
    a.show(); b.show(); c.show();
    if(a==c){
        cout << "a and c are the same" << endl;
    }
    return 0;
}
