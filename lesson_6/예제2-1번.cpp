#include <iostream>

using namespace std;

template<typename T1, typename T2>
T1 sum(T1 x, T2 y) {
	return x + y;
}

int main() {
	cout << sum(1, 2) << endl;
	cout << sum(1.5, 2.1) << endl;
}