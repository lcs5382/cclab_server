#include "derived.h"

int main() {
	Derived derived1(24, "Cheonsol", "Lee");
	
	cout << derived1.full_name() << ", " << derived1.get_age() << endl;
	
	return 0;
}