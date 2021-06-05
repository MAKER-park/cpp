//  main.cpp
//  ch9.2
//  Created by 박재완 on 2021/05/26.
#include <iostream>
#include <string> // string 헤더 선언
using namespace std;
//제공된 추상 클래스
class Converter {
protected:
    double ratio;
    virtual double convert(double src)=0;
    virtual string getSourceString()=0;
    virtual string getDestString()=0;
public :
    Converter(double ratio) { this->ratio = ratio; }
    void run() {
        double src;
        cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
        cout << getSourceString() << "을 입력하세요>> ";
        cin >> src;
        cout << "변환 결과 : " << convert(src) << getDestString() << endl;
    }
};
//변환 클래스 선언
class KmToMile : public Converter {
public :
    KmToMile(int n) : Converter(n) { };
    string getDestString() {
        return "Mile"; // mile반환
    }
    double convert(double src) {
        return src / 1.609344; // src / 1.609344 반환
    }
    string getSourceString() {
        return "Km"; //km 반환
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    KmToMile toMile(1.609344);
    toMile.run();
    return 0;
}
