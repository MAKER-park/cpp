//
//  main.cpp
//  ch4-7
//
//  Created by 박재완 on 2021/04/13.
#include <iostream>
#include<cmath>// 제곱 출력을 위한 수학 함수
using namespace std;
class circle{
    int radius;
public:
    void setRadius(int radius);
    double getArea();
};
void circle::setRadius(int r){
    radius = r;
}
double circle::getArea(){
    return pow(radius,2)*3.14;//면적 구하기 pow함수 사용
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int r, num=3, cnt=0;
        //cout << "원의 개수 >> ";
        //cin >> num ;
        circle *pArray = new circle[num]; // 입력받은 num만큼 동적으로 객체 배열 생성
    for(int i=0; i<num; i++){
        cout << "원 " << i+1 << "의 반지름 >> ";
        cin >> r;
        pArray->setRadius(r);// 받아온 반지름을 radius에 입력
        if(pArray->getArea() > 100){//면적을 불러고오 기준 면적 100 과 비교
            cnt++;}
        pArray++;}
    cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다\n";
    return 0;
}
