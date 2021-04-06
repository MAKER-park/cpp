//
//  main.cpp
//  8958
//
//  Created by 박재완 on 2021/03/27.
//

#include <iostream>
#include <string.h>

using namespace std;

char quiz [81];
int number = 0;
int score = 0;
int bounes = 1;

int main(int argc, const char * argv[]) {
    cin >> number ;
    for(int i = 0; i < number ; i ++){
        score = 0;
        bounes = 1;
        cin>>quiz;
        //check score!!
        for(int t = 0 ; t < strlen(quiz) ; t++){
            if(quiz[t] == 'O'){
                //cout << "right!\n";
                score += bounes;
                bounes++;
            }else if (quiz[t] == 'X'){
                //cout << "worng!!\n";
                bounes = 1;
            }
        }
        cout << score  << endl;
    }
    //cout << "length : " << strlen(quiz) << endl;
    return 0;
}
