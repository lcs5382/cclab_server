#pragma once

#include <iostream>

using namespace std;

class Student {
private:
	char name[6] = "";
	int phone_number = 0;
	double score = 0;

public:
	void input_information() {
		strcpy_s(this->name, 6, "leecs");
		this->phone_number = 1234;
		this->score = 100;
	}

	void print_information() {
		cout << this->name << endl;
		cout << this->phone_number << endl;
		cout << this->score << endl;
	}
};



