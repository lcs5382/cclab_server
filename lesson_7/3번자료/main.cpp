#include "derived.h"

int main() {
	Derived d(44, "Larry", "Page");
	Base &r = d;    //허용됨
	Base *p = &d;   //허용됨
	cout << p->full_name() << endl;

	//Base b("Mark", "Zuckerberg");
	//Derived &r = b;   //허용되지 않음
	//Derived *p = &b;  //허용되지 않음
	//cout << r.full_name() << endl;
	//cout << p->get_age() << endl;
	
	return 0;
}