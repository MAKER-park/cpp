//
//  main.cpp
//  ch4-4
//  Created by 박재완 on 2021/04/11.
#include<iostream>
using namespace std;
 
class Sample{
    int *p;
    int size;
public:
    Sample(int n) { // 생성자
        size = n; p = new int [n]; // n개 정수 배열의 동적 생성
    }
    void read();  // 동적 할당받은 정수 배열 p에 사용자로부터 정수를 입력 받음
    void write(); // 정수 배열을 화면에 출력
    int big(); // 정수 배열에서 가장 큰 수 리턴
   ~Sample();  // 소멸자
};
void Sample::read(){
    for(int i=0; i<size; i++){
        cin >> p[i]; //받은 수배열에 하나씩 넣을것
    }
}
 
void Sample::write(){
    for(int i=0; i<size; i++){
        cout << p[i] << " "; // 받은 수배열 출력
    }
    cout << endl;
}
 
int Sample::big(){
    int big = 0;
    for(int i=0; i<size; i++){
        if(big < p[i]) big = p[i];// 가장 큰수를 만나면 바꾸기
    }
    return big;
}
 
Sample::~Sample(){}

int main(int argc, const char * argv[]) {
    // insert code here...
    Sample s(10); // 10개 정수 배열을 가진 Sample 객체 생성
    s.read();  // 키보드에서 정수 배열 읽기
    s.write();  // 정수 배열 출력
    cout << "가장 큰 수는 " << s.big() << endl; // 가장 큰 수 출력
    return 0;
}
