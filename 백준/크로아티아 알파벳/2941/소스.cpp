#include <iostream>
#include <string>

using namespace std;

string str= "", tabel[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

int word_count = 0, kind_count[8] = { 0 }, num = 0;

int main() {
	cin >> str;
	cout << str.substr(0,2) << endl;
	cout << str.substr(2,2) << endl;
	for (int i = 0; i < str.length(); i=i+2) {
		cout << str.substr(i, 2) << endl;
		for (int j = 0; j < 8; j++) {
			if (str.substr(i,2) == tabel[j]) {
				kind_count[j]++;
			}
		}
	}
	for (int i = 0; i < str.length(); i = i + 3) {
		cout << str.substr(i, 3) << endl;
		for (int j = 0; j < 8; j++) {
			if (str.substr(i,3) == tabel[j]) {
				kind_count[j]++;
			}
		}
	}

	for (int i = 0; i < 8; i++) {
		if (kind_count[i] != 0) {
			num++;
		}
	}

	cout << num << endl;
	return 0;
}