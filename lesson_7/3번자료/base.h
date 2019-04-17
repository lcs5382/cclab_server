#pragma once

#include <iostream>
#include <string>
using namespace std;

class Base {
private:
	string first_name;
	string last_name;

public:
	Base(const string &first_name = "none", const string &last_name = "none")
		:first_name(first_name), last_name(last_name) {
		cout << "기초클래스 생성자입니다." << endl;
	}

	string full_name() const {
		return first_name + " " + last_name; 
	}

	~Base() {
		cout << "기초클래스 소멸자입니다." << endl;
	}
};