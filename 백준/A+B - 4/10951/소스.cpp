#include <iostream>

using namespace std;

int a = 0, b = 0;


int main() {

	while (1) {
		cin >> a >> b;
		if (cin.eof() == 0) {//정상적인 비트 값까지 볼 수 있도록 하는 체크 
			cout << a + b << endl;
		}
		else{
			break;
		}
		

	}
	return 0;
}