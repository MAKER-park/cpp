//
//  main.cpp
//  ch4-14
//
//  Created by 박재완 on 2021/04/12.
#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;
 
class Player{
    string player;
public:
    void setName(string player);
    string getName(){return player;};
};
 
class GamblingGame {
    Player *p = new Player[2];
public:
    GamblingGame();
    void nameSet();
    string ranNum(string n);
    void startGame();
    ~GamblingGame() { delete [] p;}// 소멸자
};

void GamblingGame::startGame(){
    string n;
    int i=0;
    while(true){//loop문 제작
        string m;
        cout << p[i % 2].getName() << ":\n";
        getline(cin,n); //<enter> 입력 받기위함
        m = p[i % 2].getName();
        n = ranNum(n);
        if(n=="님 승리!!") {
            cout << m + n << endl;// 마지막 줄바꿈
            break;
        }
        else
            cout << n << endl;
        i++;
    }
}
 
GamblingGame::GamblingGame(){
    cout << "***** 갬블링 게임을 시작합니다. *****\n";
    srand(time(NULL));
}
void GamblingGame::nameSet() {
    string player;
    cout << "첫번째 선수 이름>>";
    cin >> player;
    p[0].setName(player);
    cout << "두번째 선수 이름>>";
    cin >> player;
    p[1].setName(player);
}

string GamblingGame::ranNum(string n){
    int r[3];
    cout << "\t\t";
    for (int i = 0;i < 3;i++) {
        r[i] = rand() % 3;// 0,1,2 생성 숫자 랜덤 생성시에 제한
        cout << r[i]<< "\t";
    }
    if(r[0]==r[1] && r[0]==r[2]) {// 0 1 2번째가 모두 같을떄 승리 표시
        n +="님 승리!!";
        return n;
    }
    else
        return "아쉽군요!";
}

void Player::setName(string n){
    player = n;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    GamblingGame game;
    game.nameSet();
    game.startGame();
    return 0;
}
