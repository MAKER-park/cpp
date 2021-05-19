//  main.cpp
//  ch8.5
//  Created by 박재완 on 2021/05/19.
#include <iostream>
using namespace std;
class BaseArray {//제공되는 클래스 코드
    int capacity; // 배열의 크기
    int *mem; // 정수 배열을 만들기 위한 메모리의 포인터
protected: // 생성자가 protected
    BaseArray(int capacity=100){
        this->capacity = capacity; mem = new int [capacity];
    }
    ~BaseArray() { delete [] mem; }
    void put(int index, int val) { mem[index] = val; }
    int get(int index) { return mem[index]; }
    int getCapacity() { return capacity; }
};
// class선언 MyQueue(dequeue, enqueue,length,capacity )
class MyQueue : public BaseArray{
    int front = 0, rear = 0;
public:
    MyQueue(int capacity) : BaseArray(capacity) {;}
    int capacity() {return getCapacity();} //반환 함수
    int length() {return rear;}//반환 함수
    void enqueue(int n){
        if(rear >= getCapacity()){//대기열이 다 차는 경우
            cout << "Queue is full...\n";
            exit(1);
        }
        rear++;
        put(rear, n);
    }
    int dequeue(){
        if(rear < 0){//대기열이 비어 있는 경우
            cout << "Queue is empty...\n";
            exit(1);
        }
        ++front;
        rear--;
        return get(front);
    }
};


int main(int argc, const char * argv[]) {
    // insert code here... 실행되길 원하는 메인 소스
    MyQueue mQ(100);
    int n;
    cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
    for(int i=0; i<5; i++){
        cin >> n;
        mQ.enqueue(n); // 큐에 삽입
    }
    cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() << endl;
    cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
    while(mQ.length() != 0){
        cout << mQ.dequeue() << ' '; // 큐에서 제거하여 출력
    }
    cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;
    return 0;
}
