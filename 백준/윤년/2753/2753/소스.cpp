#include <iostream>

using namespace std;


int a = 0, b = 0;


int main() {
	cin >> a;
	if (a%4 == 0 && a%100 != 0 || a%400 == 0) {
		cout << "1" << endl;
	}else {
		cout << "0" << endl;
	}

}