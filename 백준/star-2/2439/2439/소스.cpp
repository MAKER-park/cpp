#include <iostream>

using namespace std;

int a = 0, b = 0, c = 0;

int main() {
	cin >> a;
	for (int i = 1; i <= a; i++) {
		for (b = a; b >= 1; b--) {
			if (b <= i) {
				cout << "*";
			}
			if (b > i) {
				cout << " ";
			}
			if (b == 1) {
				cout << "\n";
			}
		}
	}
}