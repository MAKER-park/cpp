#include <iostream>

using namespace std;

int arr[11] = { 0,0,0,0,0,0,0,0,0,0,0 }, a = 0, number = 0 , ct = 1;



int main() {

	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
		arr[i] %= 42;
	}

	for (int i = 0 ; i < 10 ; i++) {
		for (int t = ct; t < 10; t++) {
			//cout << arr[i] << " " << arr[t] << endl;
			if (arr[i] == arr[t]) {
				number++;
				break;
			}
		}
		ct++;
	}

	cout << 10 - number << endl;


	return 0;
}