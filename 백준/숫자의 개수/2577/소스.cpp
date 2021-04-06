#include <iostream>

using namespace std;

int arr[11] = { 0,0,0,0,0,0,0,0,0,0,0 }, a = 0, b = 0, c = 0, d = 0;



int main() {
	cin >> a >> b >> c;
	d = a * b * c;

	while (d > 0)
	{
		//cout << d << endl;
		switch (d % 10) {
		case 0:
			arr[0]++;
			break;
		case 1:
			arr[1]++;
			break;
		case 2:
			arr[2]++;
			break;
		case 3:
			arr[3]++;
			break;
		case 4:
			arr[4]++;
			break;
		case 5:
			arr[5]++;
			break;
		case 6:
			arr[6]++;
			break;
		case 7:
			arr[7]++;
			break;
		case 8:
			arr[8]++;
			break;
		case 9:
			arr[9]++;
			break;
		}
		d = d / 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}