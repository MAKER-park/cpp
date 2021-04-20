//
//  main.cpp
//  ch5-2
//
//  Created by 박재완 on 2021/04/20.
//

#include <iostream>
#include <string>

using namespace std;

void half(double &n){
    n=n/2;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    double a = 20;
    half(a);
    cout << a << endl;
    return 0;
}
