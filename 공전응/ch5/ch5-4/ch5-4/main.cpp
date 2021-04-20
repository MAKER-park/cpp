//  main.cpp
//  ch5-4
//  Created by 박재완 on 2021/04/20.
#include <iostream>
using namespace std;
bool bigger(int number1, int number2, int& big_number){ // big_number은 아래 변수와 참조 되어 같은 형태를 가지고 있다.
    if( number1 == number2){ return  true;}
    if(number1 > number2){ big_number = number1;}
    else{big_number = number2;}
    return false;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int number1 = 0, number2 = 0, big_number = 0;//변수 초기화
    bool get_bool = 0;// 초기화
    cout << "두개의 정수를 입력 해주세요. 예시 : 2 5 " << endl;
    cin >> number1 >> number2;
    get_bool = bigger(number1, number2, big_number);
    if(get_bool== 1){// 두수가 같을때는 true 1 값을 반환하기 때문
        cout << "같은 수입니다." << endl;
    }else{//false 일때는 큰 숫자가 판가름 난 상태
        cout << "가장 큰 수는 : " << big_number << endl;
    }
    return 0;
}
