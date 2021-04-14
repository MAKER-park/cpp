//
//  main.cpp
//  ch4
//
//  Created by 박재완 on 2021/04/11.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int *p = new int[5]; // 배열 생성
        double sum = 0, avareage = 0;
        cout << "정수 5개 입력>>";
        for(int i=0; i<5; i++) {
            cin >> p[i];
            sum += p[i];
        }
    avareage = sum/5;
    cout << "평균 " << avareage << "\n";
    delete [] p;// 소멸자 메모리 누수 방지
    return 0;
}
