#include <iostream>

using namespace std;

int sum(int num1, int num2 = 10) {
	return num1 + num2;
}

int sum(int num1, int num2, int num3) {
	return num1 + num2 + num3;
}

int sum(int num1, int num2, int num3, int num4 = 50) {
	return num1 + num2 + num3 + num4;
}
int main()
{
	cout << sum(1) << endl;
	cout << sum(1, 2) << endl;
	cout << sum(1, 2, 3) << endl;

	return 0;
}

