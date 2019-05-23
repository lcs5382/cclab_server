#pragma once
#include "pet.h"

class Dog : public Pet {
public:
	Dog(const string& name, int age) : Pet(name,age){}
	string howl() const { return "bowwow"; }
};

