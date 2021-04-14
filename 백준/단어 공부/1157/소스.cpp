#include <iostream>
#include <string>

using namespace std;

int str_check[26] = { 0 }, max_num = 0, max_count = 0, max_pos = 0; // 모두 0 으로 초기화
string str = "";
char max_word = 'A'; //대문자로 표시하니까 POS 숫자를 더한다면 원하는 알파벳 표시 가능

int main() {
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a' || str[i] == 'A') {
			str_check[0]++;
		}else if (str[i] == 'b' || str[i] == 'B') {
			str_check[1]++;
		}
		else if (str[i] == 'c' || str[i] == 'C') {
			str_check[2]++;
		}
		else if (str[i] == 'd' || str[i] == 'D') {
			str_check[3]++;
		}
		else if (str[i] == 'e' || str[i] == 'E') {
			str_check[4]++;
		}
		else if (str[i] == 'f' || str[i] == 'F') {
			str_check[5]++;
		}
		else if (str[i] == 'g' || str[i] == 'G') {
			str_check[6]++;
		}
		else if (str[i] == 'h' || str[i] == 'H') {
			str_check[7]++;
		}
		else if (str[i] == 'i' || str[i] == 'I') {
			str_check[8]++;
		}
		else if (str[i] == 'j' || str[i] == 'J') {
			str_check[9]++;
		}
		else if (str[i] == 'k' || str[i] == 'K') {
			str_check[10]++;
		}
		else if (str[i] == 'l' || str[i] == 'L') {
			str_check[11]++;
		}
		else if (str[i] == 'm' || str[i] == 'M') {
			str_check[12]++;
		}
		else if (str[i] == 'n' || str[i] == 'N') {
			str_check[13]++;
		}
		else if (str[i] == 'o' || str[i] == 'O') {
			str_check[14]++;
		}
		else if (str[i] == 'p' || str[i] == 'P') {
			str_check[15]++;
		}
		else if (str[i] == 'q' || str[i] == 'Q') {
			str_check[16]++;
		}
		else if (str[i] == 'r' || str[i] == 'R') {
			str_check[17]++;
		}
		else if (str[i] == 's' || str[i] == 'S') {
			str_check[18]++;
		}
		else if (str[i] == 't' || str[i] == 'T') {
			str_check[19]++;
		}
		else if (str[i] == 'u' || str[i] == 'U') {
			str_check[20]++;
		}
		else if (str[i] == 'v' || str[i] == 'V') {
			str_check[21]++;
		}
		else if (str[i] == 'w' || str[i] == 'W') {
			str_check[22]++;
		}
		else if (str[i] == 'x' || str[i] == 'X') {
			str_check[23]++;
		}
		else if (str[i] == 'y' || str[i] == 'Y') {
			str_check[24]++;
		}
		else if (str[i] == 'z' || str[i] == 'Z') {
			str_check[25]++;
		}	
	}
	for (int i = 0; i < 26; i++) {
		//cout << str_check[i] << "\t";
		if (i == 0) {
			max_num = str_check[i];
		}
		else if (max_num < str_check[i]) {
			max_num = str_check[i];
		}
	}// 큰 수 찾기 

	for (int i = 0; i < 26; i++) {
		//cout << str_check[i] << "\t";
		if (max_num == str_check[i]) {
			max_count++;
			max_pos = i;
		}
	}// 반복수 찾기
	
	//결과
	if (max_count == 1) {
		//cout << max_word + (char)max_pos << endl;
		cout << (char)(max_pos + max_word) << endl;
	}
	else {
		cout << "?\n";
	}
	return 0;
}