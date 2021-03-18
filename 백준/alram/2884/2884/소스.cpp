#include <iostream>

using namespace std;


int a = 0, b = 0;


int main() {
	cin >> a >> b;
	if (b - 45 < 0) {//45분보다 작을떄
		a--;
		b = 60 + (b - 45);//60분계
		if (a < 0) {
			a = 23;
			cout << a << " " << b << endl;
		}
		else {
			cout << a << " " << b << endl;
		}
	}
	else {
		cout << a << " " << b-45 << endl;
	}

}