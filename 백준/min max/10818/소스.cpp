#include <iostream>

using namespace std;

int arr[1000001], a = 0, mi = 0, ma = 0;



int main() {
	
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> arr[i];
		if (i == 0) {
			ma = arr[0];
			mi = arr[0];
		}
		else {
			if (ma < arr[i]) {
				ma = arr[i];
			}
			if (mi > arr[i]) {
				mi = arr[i];
			}
		}
		
	}

	cout << mi << " " << ma << endl;

	

	return 0;
}