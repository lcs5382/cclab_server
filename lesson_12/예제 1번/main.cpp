#include <iostream>
#include "dog.h"
#include "cat.h"
#include "turtle.h"

int main() {
	Dog minion("minion", 21);
	Cat suari("suari", 21);
	Turtle soyday("soyday", 20);

	cout << minion.get_name() << ", " << minion.get_age() << ", " << minion.howl() << endl;
	cout << suari.get_name()  << ", " << suari.get_age() << ", "  << suari.howl() << endl;
	cout << soyday.get_name() << ", " << soyday.get_age() << ", " << soyday.howl() << endl;

	return 0;
}

