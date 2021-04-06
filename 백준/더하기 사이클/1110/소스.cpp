#include <iostream>

using namespace std;

int a = 0, b = 0 , c = 0 , d = 0, e = 0, add = 0;


int main() {
	cin >> a;
	add = a;
	while (a != add || e == 0) {
		b = add / 10;
		c = add % 10;
		d = (b+c) % 10;
		b = c, c = d;
		add = b * 10 + c;
		e++;

	}
	cout << e;

	return 0;
}