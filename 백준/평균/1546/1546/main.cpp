//
//  main.cpp
//  1546
//
//  Created by 박재완 on 2021/03/27.
//

#include <iostream>
using namespace std;
double number = 0, max_score = 0, sum = 0;
int score [1001] ;

void avarage(){
    cout.setf(ios::fixed);
    //cout.precision(2);
    //cout.precision(2);
    
    /*for(int t = 0 ; t < number ; t ++){
        if(max_score == score[t]){
            sum += score[t];
        }else{
            sum += (score[t]/max_score)*100;
        }
    }*/
    cout << 100/max_score*sum/number << endl;
    cout.unsetf(ios::fixed);
}

int main(int argc, const char * argv[]) {
    //일단 과목 갯수를 받는 식
    cin >> number ;
    for (int i = 0; i < number ; i ++){
        cin >> score[i];
        if( i == 0 ){
            max_score = score[i];
        }
        else if(max_score < score[i]){
            max_score = score[i];
        }
        sum += score[i];
    }
    
    avarage();
    /*
    //test output
    for (int i = 0; i < number ; i ++){
        cout << score[i] << endl;
    }
    cout << "max : " << max_score << endl;
    */
    return 0;
}
