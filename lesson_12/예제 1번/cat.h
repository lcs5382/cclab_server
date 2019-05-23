#pragma once
#include "pet.h"

class Cat : public Pet {
public:
	Cat(const string& name, int age) : Pet(name, age) {}
	string howl() const { return "mew"; }
};

