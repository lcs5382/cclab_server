#include <iostream>

using namespace std;

int sum(int val) {
	static int num = 0; // 정적변수
	num = num + val;

	return num;
}

int main()
{
	for (int i = 1; i <= 10; i++) {
		cout << sum(i) << endl;
	}

	return 0;
}

