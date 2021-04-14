//
//  main.cpp
//  ch4-5
//
//  Created by 박재완 on 2021/04/13.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

string str;
long len = 0, change_word_sel = 0;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)\n"<<">>";
    while(1){//loop 생성
        srand((unsigned)time(0));
        cout << ">>";
        getline(cin, str);
        if(str == "exit"){//exit 받으면 종료
            break;
        }
        len = str.length();// 문자열 길이 반환
        change_word_sel = rand()%len;// 문자열 길이내에서 랜덤으로 받아와야 하므로
        str[change_word_sel] = rand()%25+95;//임의 문자(아스키 코드 범위내)로 교환
        cout << str << endl;
    }
    
    
    
    return 0;
}
