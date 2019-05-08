#include "derived.h"

Derived::Derived(unsigned age, 
				const string &first_name,
				const string &last_name) : Base(first_name, last_name) {
	this->age = age;
	cout << "파생클래스 생성자입니다." << endl;
}

Derived::Derived(unsigned age, const Base &base) : Base(base) {
	this->age = age;
	cout << "파생클래스 생성자입니다." << endl;
}