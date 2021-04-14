#include <iostream>

using namespace std;

int size_num = 0, sum = 0;
char num[101] = { ' ', };


int main() {
	cin >> size_num;
	for (int i = 0; i < size_num; i++) {
		cin >> num[i];
		sum += num[i]-'0';//아스키 코드 0 = 48로 빼주면 모두 숫자로 변화함
	}
	cout << sum << endl;
	return 0;
}