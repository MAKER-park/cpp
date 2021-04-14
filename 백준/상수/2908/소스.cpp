#include <iostream>

using namespace std;

int first = 0, second = 0, convert_1 = 0, convert_2 = 0;
int num_array[7] = { 0 };

int main() {
	cin >> first >> second; // 두수 받기

	//자릿수 변경
	convert_1 = first / 100; //100의 자리
	convert_2 = first % 10; //1의 자리
	first = (first / 10) - ((first / 100) * 10);//10의자리
	first = (convert_2 * 100) + (first * 10) + (convert_1);//완성

	convert_1 = second / 100; //100의 자리
	convert_2 = second % 10; //1의 자리
	second = (second / 10) - ((second / 100) * 10);//10의자리
	second = (convert_2 * 100) + (second * 10) + (convert_1);//완성

	//cout << first << " " << second << endl;

	if (first < second) {
		cout << second << endl;
	}
	else {
		cout << first << endl;
	}

	return 0;
}