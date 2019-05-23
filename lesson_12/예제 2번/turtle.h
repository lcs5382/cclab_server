#pragma once
#include "pet.h"

class Turtle : public Pet {
public:
	Turtle(const string& name, int age) : Pet(name, age) {}
};

