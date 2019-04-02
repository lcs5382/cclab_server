#pragma once

#include <iostream>

using namespace std;

class Student {
private:
	char name[6] = "";
	int phone_number = 0;
	double score = 0;

public:
	Student(char* _name, int _number, double _score) {
		strcpy_s(this->name, 6, _name);
		this->phone_number = _number;
		this->score = _score;
		cout << "This is Constructor" << endl;
	} 

	void input_information();
	void print_information();

	~Student() {
		cout << "This is Destructor" << endl;
	}
};



