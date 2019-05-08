#include <iostream>

using namespace std;

int & func(int & sum) {
	sum++;
	return sum;
}


int main() {
	int num = 1;
	int & num2 = func(num);

	num++;
	num2++;

	cout << "num  : " << num << endl;
	cout << "num2 : " <<num2 << endl;
}