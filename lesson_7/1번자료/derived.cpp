#include "derived.h"

Derived::Derived(unsigned age, 
				const string &first_name,
				const string &last_name) : Base(first_name, last_name) {
	this->age = age;
}

Derived::Derived(unsigned age, const Base &base) : Base(base) {
	this->age = age;
}