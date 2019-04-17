#include "derived.h"

int main() {
	Base base1("Myeongsung", "You");
	Base base2("Sangwon",  "Seo");
	Derived derived1(24, "Cheonsol", "Lee");
	Derived derived2(26, "Changsung" , "Kim");

	cout << base1.full_name() << endl;
	cout << base2.full_name() << endl;
	cout << derived1.full_name() << ", " << derived1.get_age() << endl;
	cout << derived2.full_name() << ", " << derived2.get_age() << endl;
	
	return 0;
}