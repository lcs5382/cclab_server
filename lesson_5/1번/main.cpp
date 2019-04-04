#include <iostream>

using namespace std;

int num1 = 10; //전역변수

int func() {
	static int num3 = 30; // 정적변수
	return num3;
}

int main()
{
	int num2 = 20; // 지역변수

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	//cout << "num3: " << num3 << endl;
	cout << "num3: " << func() << endl;

	return 0;
}

