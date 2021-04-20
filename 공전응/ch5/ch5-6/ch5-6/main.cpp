//  main.cpp
//  ch5-6
//  Created by 박재완 on 2021/04/20.
#include <iostream>
using namespace std;

char b = ' ';

char& find(char a[], char c, bool& success){
    int len = sizeof(a);
    for(int i=0; i<len; i++){
        if(a[i]==c) {
            success = true;
            return a[i];
        }
    }
    return b;// 반환값 에러때문에 간이 생성
}

int main(int argc, const char * argv[]) {
    // insert code here...
    char s[] = "Mike";
    bool b = false;
    char& loc = find(s, 'M', b);
    if(b == false) {
        cout << "M을 발견할 수 없다" << endl;
        return 0;
    }
    loc = 'm'; // 'M' 위치에 'm' 기록
    cout << s << endl; // "mike"가 출력됨
}
