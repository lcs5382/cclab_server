#include <iostream>
#include "dog.h"
#include "cat.h"
#include "turtle.h"

void print_howl(const Pet& pet);

int main() {
	int number;
	Dog minion("minion", 21);
	Cat suari("suari", 21);
	Turtle soyday("soyday", 20);

	cout << "누굴 울게 만들까요?\n"
		<< "1. minion\n"
		<< "2. suari\n"
		<< "3. soyday\n"
		<< " >> ";
	cin >> number;

	switch (number) {
	case 1: print_howl(minion); break;
	case 2: print_howl(suari); break;
	case 3: print_howl(soyday); break;
	}

	return 0;
}

void print_howl(const Pet& pet) {
	cout << pet.howl() << endl;
}

