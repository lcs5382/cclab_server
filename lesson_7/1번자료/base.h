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
		:first_name(first_name), last_name(last_name) {}

	string full_name() const {
		return first_name + " " + last_name; 
	}
};