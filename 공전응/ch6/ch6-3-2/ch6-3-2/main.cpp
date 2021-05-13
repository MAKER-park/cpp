//
//  main.cpp
//  ch6-3-2
//
//  Created by 박재완 on 2021/05/03.
//
#include <iostream>

using namespace std;

int big(int a, int b, int c = 100){// a b c ab의 크기 비교후 c의 기준값을 이용하는 비교 함수 c의 값의 존재 유무를 이용 하여 값 비교 없다면 100 있다면 지정된 값이 c의 값이 된다.
    if(a < b){if(b < c){ return b;} else{return c;}}
    else{if(a < c){ return a;}else{ return c;}}
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int x = big(3, 5); // 3 과 5 중 큰값 5는 최대값 100보다 작으므로. 5 리턴
    int y = big(300, 60); // 300과 60중에 큰값은 300이 100보다 크므로 100리턴
    int z = big(30, 60, 50);// 30과 60중 큰값 60이 최대값 50보다 크므로, 50리턴
    cout << x << ' ' << y << ' ' << z << endl;
    return 0;
}

