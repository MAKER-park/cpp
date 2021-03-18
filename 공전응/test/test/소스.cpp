#include <iostream> 

using namespace std;
//using std::cin;

int b = 4;
int square = b * b;

int main() {
	//std::cout << "Hello World" << std::endl; 
	int age = 24;
	const char* pe = "컴퓨터 공학과";
	cout << age << pe << endl;
	//return 0;
	for (int i = 0; i < 4; i++) {
		switch (i)
		{
		case 0:
			cout << "*\n";
			break;

		case 1:
			cout << "**\n";
			break;

		case 2:
			cout << "***\n";
			break;

		case 3:
			cout << "****\n";
			break;

		default:
			break;
		}
	}
	
}


