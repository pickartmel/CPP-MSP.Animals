#pragma once
#include "Animal.h"

class Dog : public Animal
{
public:
	Dog(string name);
	Dog() {};
	virtual ~Dog() {}//destructor

	virtual void Move(); 

	virtual void Speak();
};

