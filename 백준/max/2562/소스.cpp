#include <iostream>

using namespace std;

int arr[11], a = 0, number = 0, ma = 0;



int main() {

	for (int i = 1; i < 10; i++) {
		cin >> arr[i];
		if (i == 0) {
			ma = arr[0];
		}
		else {
			if (ma < arr[i]) {
				ma = arr[i];
				number = i;
			}
		}

	}

	cout << ma << "\n" << number << endl;



	return 0;
}