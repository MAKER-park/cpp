#include <iostream>

using namespace std;

int a = 0, b = 0;


int main() {
	while (1) {

		cin >> a >> b;

		if (a == 0 && b == 0) {
			break;
		}
		else {
			cout << a + b << endl;
		}

	}
	return 0;
}