//  main.cpp
//  ch10.3
//  Created by 박재완 on 2021/06/02.
#include <iostream>
using namespace std;
 
template <class T>
void reverseArray(T array [] , int n){
    int j=n-1;
    for(int i=0; j>i; i++){
        T tmp = array[j];
        array[j] = array[i];
        array[i] = tmp;
        j--;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int x[] = { 1, 10, 100, 5, 4};
    reverseArray(x, 5);
    for(int i=0; i<5; i++){
        cout << x[i] << ' '; // 4 5 100 10 1이 출력된다.
    }
    cout << endl;
    return 0;
}
