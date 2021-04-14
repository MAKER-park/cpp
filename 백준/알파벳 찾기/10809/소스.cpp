#include <iostream>
#include <string>

using namespace std;

int loc[27] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};// -1 ÃÊ±âÈ­
string word;


int main() {
	cin >> word;
	for (int i = 0; i < word.length(); i++) {
		if (word[i] == 'a' && loc [0] == -1) {
			loc[0] = i;
		}
		else if (word[i] == 'b' && loc[1] == -1) {
			loc[1] = i;
		}
		else if (word[i] == 'c' && loc[2] == -1) {
			loc[2] = i;
		}
		else if (word[i] == 'd' && loc[3] == -1) {
			loc[3] = i;
		}
		else if (word[i] == 'e' && loc[4] == -1) {
			loc[4] = i;
		}
		else if (word[i] == 'f' && loc[5] == -1) {
			loc[5] = i;
		}
		else if (word[i] == 'g' && loc[6] == -1) {
			loc[6] = i;
		}
		else if (word[i] == 'h' && loc[7] == -1) {
			loc[7] = i;
		}
		else if (word[i] == 'i' && loc[8] == -1) {
			loc[8] = i;
		}
		else if (word[i] == 'j' && loc[9] == -1) {
			loc[9] = i;
		}
		else if (word[i] == 'k' && loc[10] == -1) {
			loc[10] = i;
		}
		else if (word[i] == 'l' && loc[11] == -1) {
			loc[11] = i;
		}
		else if (word[i] == 'm' && loc[12] == -1) {
			loc[12] = i;
		}
		else if (word[i] == 'n' && loc[13] == -1) {
			loc[13] = i;
		}
		else if (word[i] == 'o' && loc[14] == -1) {
			loc[14] = i;
		}
		else if (word[i] == 'p' && loc[15] == -1) {
			loc[15] = i;
		}
		else if (word[i] == 'q' && loc[16] == -1) {
			loc[16] = i;
		}
		else if (word[i] == 'r' && loc[17] == -1) {
			loc[17] = i;
		}
		else if (word[i] == 's' && loc[18] == -1) {
			loc[18] = i;
		}
		else if (word[i] == 't' && loc[19] == -1) {
			loc[19] = i;
		}
		else if (word[i] == 'u' && loc[20] == -1) {
			loc[20] = i;
		}
		else if (word[i] == 'v' && loc[21] == -1) {
			loc[21] = i;
		}
		else if (word[i] == 'w' && loc[22] == -1) {
			loc[22] = i;
		}
		else if (word[i] == 'x' && loc[23] == -1) {
			loc[23] = i;
		}
		else if (word[i] == 'y' && loc[24] == -1) {
			loc[24] = i;
		}
		else if (word[i] == 'z' && loc[25] == -1) {
			loc[25] = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << loc[i] << " ";
	}
	return 0;
}