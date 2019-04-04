#include <iostream>

using namespace std;

int main()
{
	int* ptr = new int[10];

	ptr[0] = 10;
	ptr[1] = 20;
	ptr[2] = 30;

	cout << ptr[1] << endl;
	cout << *(ptr + 2) << endl;

	delete [] ptr;

	return 0;
}

