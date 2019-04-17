#pragma once

#include "base.h"

class Derived : public Base {
private:
	unsigned int age;

public:
	Derived(unsigned age,
		const string &first_name = "none",
		const string &last_name = "none");

	Derived(unsigned age, const Base &base);

	unsigned int get_age() const { return age; }

	~Derived() {
		cout << "파생클래스 소멸자입니다." << endl;
	}
};