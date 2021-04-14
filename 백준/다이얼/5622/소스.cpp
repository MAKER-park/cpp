#include <iostream>
#include <string>

using namespace std;

string str = "";
int min_time = 0;

int main() {
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C') {
			min_time = min_time + 3;
		}
		else if (str[i] == 'D' || str[i] == 'E' || str[i] == 'F') {
			min_time = min_time + 4;
		}
		else if (str[i] == 'G' || str[i] == 'H' || str[i] == 'I') {
			min_time = min_time + 5;
		}
		else if (str[i] == 'J' || str[i] == 'K' || str[i] == 'L') {
			min_time = min_time + 6;
		}
		else if (str[i] == 'M' || str[i] == 'N' || str[i] == 'O') {
			min_time = min_time + 7;
		}
		else if (str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S') {
			min_time = min_time + 8;
		}
		else if (str[i] == 'T' || str[i] == 'U' || str[i] == 'V') {
			min_time = min_time + 9;
		}
		else if (str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z') {
			min_time = min_time + 10;
		}
	}
	cout << min_time << endl;
	return 0;
}
