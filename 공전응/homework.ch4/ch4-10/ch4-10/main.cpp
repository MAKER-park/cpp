//
//  main.cpp
//  ch4-10
//
//  Created by 박재완 on 2021/04/12.
#include<iostream>
#include<string>
using namespace std;
class Person {//이름정하는 클래스
    string name;
public:
    Person() {};
    Person(string name) { this->name = name;}
    string getName() { return name;}
    void setName(string name) { this->name = name;}
};
class Family {// 가족 구성 클래스
    Person *p; // Person 배열 포인터
    int size; // Person 배열의 크기. 가족 구성원 수
    string name;
public:
    Family(string name, int size); // size 개수만큼 Person 배열 동적 생성
    void setName(int num, string name);
    void show(); // 모든 가족 구성원 출력
    ~Family();//소멸자
};
Family::Family(string name, int size){// 인원수 이름 합치기
    p = new Person[size];
    this->size = size;
    this->name = name;
}
void Family::setName(int num, string name){
    p[num].setName(name);
}
void Family::show(){//출력부
    cout << name << "가족은 다음과 같이 " << size << "명 입니다.\n";
    for(int i=0; i<size; i++){
        cout << p[i].getName() << "\t";
    }
    cout << endl;
}
Family::~Family(){
    delete [] p;//소멸자
}
int main(int argc, const char * argv[]) {
    // insert code here...
    Family *simpson = new Family("Simpson", 3); // 3명으로 구성된 Simpson 가족
    simpson->setName(0, "Mr. Simpson");
    simpson->setName(1, "Mrs. Simpson");
    simpson->setName(2, "Bart Simpson");
    simpson->show();
    delete simpson;
    return 0;
}
