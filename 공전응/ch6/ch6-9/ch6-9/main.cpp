//  main.cpp
//  ch6-9
//  Created by 박재완 on 2021/05/03.
#include <iostream>
#include <string>
#include <vector>

using namespace std;
//class board 선언
class Board{
private:
    static unsigned int index;
    static string story[32767];
public:
    static void add(string line);
    static void print();
    static void star_print();
};

unsigned int Board::index = 0;
string Board::story[32767] = {"",};

void Board::add(string line)
{
    if(index >= 32767) cout << "Board Storage Lack" << endl;
    else
    {
        story[index] = line;
        index++;
    }
}

void Board::print()
{
    star_print();// star  출력
    cout << " 게시판입니다. ";
    star_print();
    cout << endl;

    for (int i = 0; i < index; i++)//index number  초기화
    {
        cout << i << ": " << story[i] << endl;
    }
    cout << endl;
}

void Board::star_print()// ***************라인 출력
{
    for(int i = 0; i < 13; i++)
    {
        cout << '*';
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //Board MYBOARD; // 객체 생성은 컴파일 오류입니다.
    Board::add("중간고사는 감독 없는 자율 시험입니다.");
    Board::add("코딩 라운지 많이 이용해 주세요.");
    Board::print();
    Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요.");
    Board::print();
}
