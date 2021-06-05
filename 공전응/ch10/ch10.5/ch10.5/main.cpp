//  main.cpp
//  ch10.5
//  Created by 박재완 on 2021/06/02.
#include <iostream>
using namespace std;
 
template <class T>
T* concat(T a[], int sizea, T b[], int sizeb){
    T *rArray = new T[sizea + sizeb]; // return 할 배열을 동적생성
    for(int i=0; i<sizea+sizeb; i++){
        if(i<sizea)
            rArray[i] = a[i];
        else
            rArray[i] = b[i-sizea];
    }
    return rArray;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int x[] = { 1, 10, 100, 5, 4 };
    int y[] = { 7, 6, 10, 9 };
    int *a = concat(x, 5, y, 4);
    int aSize = sizeof(x)/sizeof(x[0]) + sizeof(y)/sizeof(y[0]); // a에 들어있는 원소의 개수
     
    for (int i = 0; i<aSize; i++){
        cout << a[i] << ' ';
    }
    cout<<"\n";
    return 0;
}
