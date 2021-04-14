//
//  main.cpp
//  ch4-3
//
//  Created by 박재완 on 2021/04/12.
#include<iostream>
#include<string>
using namespace std;

int a_count = 0;
double check[3] = {0,};
int pos = 0;
string str;// string class 선언

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "문자열 입력>>";
    getline(cin,str);
    //(2) 정답
    while (1){//loop 만들기
        check[pos%2] = (int)str.find("a",pos);// 2자리 리프레쉬
        //cout << check[0] << "\t" << check[1] << endl;
        //cout << str[pos] << "\t" << (int)str.find("a",pos) << endl;
        if((int)str.find("a",pos) == -1){
            break;
        }pos++;
        
        if(check[0] != check[1]){// position의 변화 즉 반한값의 변화가 생길때 카운트
            a_count ++;
        }
    }
    
    cout << "문자 a는 " << a_count << "개 있습니다.\n" ;
    //cout << (int)str.find("a", 1,2) << endl;
    return 0;
}

/*(1) 정답
for(i=0; i<str.length(); i++){
    if(str[i]!= ' '){
        if (str.find('a', i) != string::npos) {
            cout << "find!! \n";
        }
    }
   
    //if (str.find("a") != string::npos) {
      //  cout << "찾는 문자가 존재합니다" << endl;
//      }
    if(str[i] == 'a'){//a가 있다면 카운트 증가
        //a_count++;//카운트 후치
    }
}*/
