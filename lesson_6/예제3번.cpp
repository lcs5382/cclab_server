#include <iostream>

using namespace std;

template <typename T> // 디폴트 매개변수 템플릿으로 선언
T const& find_max(T const& a, T  const& b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

template <typename T>
T const& find_max(T const& a, T const& b, T const& c) {
	return find_max(find_max(a, b), c);
}

int main() {
	cout << find_max(10, 20) << endl; //int형 
	cout << find_max(1, 20, 35) << endl;
	cout << find_max(1.5, 3.4) << endl; //float형
}