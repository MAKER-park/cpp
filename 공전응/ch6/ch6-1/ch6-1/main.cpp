//  main.cpp
//  ch6-1
//  Created by 박재완 on 2021/05/03.
#include <iostream>

using namespace std;

int add(int *a, int b){//배열과, 배열의 크기를 받아오는 add 함수
    int sum = 0;
    for(int i = 0 ; i < b ; i ++){
        sum += a[i];
    }
    return  sum;
}

int add(int *a, int size , int * b){//배열과, 배열의 크기, 두번째 배열 받아오는 add 함수
    int sum = 0;
    for(int i = 0 ; i < size ; i ++){
        sum += a[i];// 첫번째 배열 합산 시작
    }
    for(int i = 0 ; i < size ; i ++){
        sum += b[i];// 두번째 배열 합산 시작
    }
    return  sum;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[] = {1,2,3,4,5};
    int b[] = {6,7,8,9,10};
    int c = add(a,5);// 배열 a의 정수를 모두 더한 값 리턴
    int d = add(a,5,b); // 배열 a와 b의 정수를 모두 더한 값 리턴
    cout << c << endl;// 15 출력
    cout << d << endl;// 55 출력
    return 0;
}
