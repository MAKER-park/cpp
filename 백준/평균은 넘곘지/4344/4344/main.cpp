//
//  main.cpp
//  4344
//
//  Created by 박재완 on 2021/03/27.
//

#include <iostream>
 
using namespace std;

int sample = 0, score[1001] = {0,}, sum = 0 ;
double avarage = 0, percent = 0, overavreag_case = 0, student = 0;


int main(int argc, const char * argv[]) {
    cin >> sample;
    for(int t = 0; t < sample ; t++){
        cout.setf(ios::fixed);
        cout.precision(3);
        overavreag_case = 0;
        sum = 0;
        avarage = 0;
        cin >> student;
        for(int i =0 ; i < student ; i ++){cin>>score[i]; sum += score[i];}
        avarage = sum/student;//avareage add
        for(int r =0 ; r < student ; r ++){if(avarage < score[r]){overavreag_case++;}}
        percent = (overavreag_case/student)*100;
        cout <<percent<<"%"<<endl;
        cout.unsetf(ios::fixed);
    }
      
    
    /*test output
    for(int i = 0 ; i < student ; i ++){
        cout << score[i] << endl;
    }*/
    return 0;
}
