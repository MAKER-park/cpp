#include <iostream>
using namespace std;

int main() {
    double a, b;

    cin >> a >> b;

    cout << fixed;
    cout.precision(15);
    cout << a/b << endl;
    cout.unsetf(ios::fixed);// 다시 정수부부터 계산 받아야 하니까
    return 0;
}