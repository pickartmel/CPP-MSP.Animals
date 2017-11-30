#pragma once
#include "Animal.h"
class Tiger :
	public Animal
{
public:
	Tiger(string name);
	virtual ~Tiger() {};
	virtual void Speak();
};

