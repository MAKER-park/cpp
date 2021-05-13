//
//  main.cpp
//  ch6-7
//  Created by 박재완 on 2021/05/03.
#include <iostream>
#include <ctime> //랜덤 발생을 위한 헤더 추가
#include <cstdlib>

using namespace std;

class Random{
public:
    static void seed() {srand((unsigned)time(0));}
    static int nextInt(int min = 0, int max = 32767);
    static char nextAlphabet();
    static double nextDouble();
};
int Random::nextInt(int min, int max){
    return rand() % (max - min) + min;
}
char Random::nextAlphabet(){
    bool _swtich = rand() % 2;
    if(_swtich){
        return rand() % ('Z'-'A') + 'A';
    }
    else {
        return rand() % ('z'-'a') + 'a';
    }
}

double Random::nextDouble(){
    return (double)(rand() * rand()) * 0.000000001;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    Random::seed();
    cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다" << endl;
    for (int i = 0; i < 10; i++){
        cout << Random::nextInt(1, 100) << ' ';
    }
    cout << endl;
    cout << "알파벳을 랜덤하게 10개를 출력합니다." << endl;
    for (int i = 0; i < 10; i++){
        cout << Random::nextAlphabet() << ' ';
    }
    cout << endl;
    cout << "랜덤한 실수를 10개를 출력합니다." << endl;
    for (int i = 0; i < 10; i++){
        cout << Random::nextDouble() << ' ';
        if(i == 4) cout << endl;
    }
    cout << endl;
    return 0;
}
