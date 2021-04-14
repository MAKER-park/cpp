#include <iostream>
#include <string>

using namespace std;

int size_case = 0, string_size = 0;
char str[21] = { ' ' };
string str_2 = "";


int main() {

	cin >> size_case;
	for (int j = 0; j < size_case; j++) {
		cin >> string_size >> str_2; //for (int i = 0; i < string_size; i++) { cin >> str[i]; };
		for (int t = 0; t < str_2.length(); t++) {
			for (int i = 0; i < string_size; i++) {
				cout << str_2[t];
			}

		}
	cout << endl;
	}
	return 0;
}