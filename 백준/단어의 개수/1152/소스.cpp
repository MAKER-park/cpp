#include <iostream>
#include <string>

using namespace std;

string str = "";

int check[2] = { 0 }, count_word = 0;


int main() {
	getline(cin, str); // 공백 포함 문자열 받기
	//cout << "첫자리 = " << str[0] << endl;
	//cout << "끝자리는 = " << str[str.length()-1] << endl;
	for (int i = 1; i < str.length(); i++) {
		//cout << str[i] << " : ";
		//cout << (int)str.find(" ", i) << endl; //" " 포지션 찾기 응용 
		/*check[i%2] = (int)str.find(" ", i);
		if (check[0] !=  check[1] ) { // 0 초기값 회피 + -1 end 지점 파악
			count_word++;
		}//왜 시간 초과인걸까...*/ 
		if (str[i] == ' ') {// 띄어쓰기 일경우
			count_word++;
			//cout << "공백 감지!! " << endl;
		}
	}/*
	if (str[0] == ' ') {
		cout << "공백 감지 첫번째 자리" << endl;
		count_word = count_word - 1;
	}*/
	if (str[str.length() - 1] == ' ') {
		//cout << "공백 감지 마지막 자리" << endl;
		count_word = count_word - 1;
	}
	cout << count_word + 1 << endl;

	return 0;
}