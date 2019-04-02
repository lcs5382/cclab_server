#pragma once

#include <iostream>

using namespace std;

typedef struct student {
	char name[6] = "";
	int phone_number = 0;
	double score = 0;
}STUDENT;

void input_information(STUDENT* student) {
	strcpy_s(student->name, 6, "leecs");
	student->phone_number = 1234;
	student->score = 100;
}

void print_information(STUDENT student) {
	cout << student.name << endl;
	cout << student.phone_number << endl;
	cout << student.score << endl;
}


