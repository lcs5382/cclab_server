#include "source.h"

void Student::input_information() {
	strcpy_s(this->name, 6, "leecs");
	this->phone_number = 1234;
	this->score = 100;
}

void Student::print_information() {
	cout << this->name << endl;
	cout << this->phone_number << endl;
	cout << this->score << endl;
}

