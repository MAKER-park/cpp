#include <iostream>

using namespace std;
int h, t, o, cnt = 0;


int test(int a) {
	//cout << a << "받은수" << endl;
	if (a < 100) {
		cout << a << endl;
	}
	else{
		//cout << h << "," << t << "," << o << "받은수" << endl;
		for (int i = 100; i <= a; i++) { //세자릿수 한수 판별루프
			//cout << i << endl;
			h = i / 100;//백의 자리
			t = (i / 10) - ((i / 100) * 10);//십의 자리
			o = i % 10;//1의 자리
			if ((o - t) == (t - h)) {
				cnt++;
			}
		}
		cout << cnt+99 << endl;
	}

	return 0;
}

int main() {
	int N = 0;
	cin >> N;
	//cout << N << "받은수"<<endl;
	test(N);
}