#pragma once

#include <iostream>

using namespace std;

class Student {
private:
	char name[6] = "";
	int phone_number = 0;
	double score = 0;

public:
	void input_information();
	void print_information();
};



