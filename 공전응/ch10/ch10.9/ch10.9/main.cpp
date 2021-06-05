//  main.cpp
//  ch10.9
//  Created by 박재완 on 2021/06/02.
#include <iostream>
#include <vector> // vetctor 헤더 선언
using namespace std;
 
int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> v;
    double sum=0;
    
    while(true){
        int tmp;
        cout << "정수를 입력하세요(0을 입력하면 종료)>>";
        cin >> tmp;
        
        if(!tmp) {
            break; //입력한 정수가 0이면 종료
        }
        
        v.push_back(tmp); // 입력한 정수가 0이 아니면 v에 삽입
        for(int i=0; i<v.size(); i++){ // vector v의 모든 원소 출력
            cout << v.at(i) << ' ';
        }
        
        cout << endl;
        sum += tmp;
        cout << "평균 = " << sum/v.size() << endl;
        
    }
    
    return 0;
}
