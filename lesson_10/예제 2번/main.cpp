#include <iostream>

using namespace std;

class example {
private:
	int a;
	int b;

public:
	example(int i, int j) : a(i), b(j) {
		cout << "생성자입니다." << endl;
	}
	example(example & cpy) : a(cpy.a), b(cpy.b) {
		cout << "복사생성자입니다." << endl;
	}
	void show() {
		cout << a << endl << b << endl;
	}
};

int main() {
	example ex1(1, 2); // == example ex1 = {1,2};
	example ex2(ex1); // == example ex2 = ex1;

	ex2.show();
}

