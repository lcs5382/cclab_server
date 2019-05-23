#pragma once
#include <string>

using namespace std;

class Pet {
private:
	string name;
	int age;

public:
	Pet(const string &name, int age) : name(name) {
		this->age = age > 0 ? age : 1;
	}

	string get_name() const { return name; }
	int get_age() const { return age; }
	string howl() const { return string(""); }
	//virtual string howl() const { return string(""); }
};
