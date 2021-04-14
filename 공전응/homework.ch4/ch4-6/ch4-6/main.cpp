//
//  main.cpp
//  ch4-6
//
//  Created by 박재완 on 2021/04/12.
//

#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string str;//string class선언 및 생성
    cout << "아래 한 줄을 입력하세요.(exit를 입력하면 종료합니다)";
    while(true){
        cout << endl << ">>";
        getline(cin,str);//긴 문장 또는 길이 불명의 글자를 받을것이니 getline으로 받기
        if(str == "exit")// exit를 입력할 경우
            break;//바로 정지
        for(double i = str.length()-1; i>=0; i--)//int의 경우 string 변환 길이 받을떄 오류 발생 가능성 있으므로 글자수는 음수가 나올수 없으니...  double 또는 unsined int로 할것
            cout << str[i];// 거꾸로 출력하기
    }
    return 0;
}
