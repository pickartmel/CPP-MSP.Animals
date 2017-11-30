#include "Dog.h"



Dog::Dog(string name): Animal(name)
{

}

void Dog ::Move()
{
	cout << GetName() << " is running." << endl;
}


void Dog ::Speak()
{
	cout << GetName() << " says: Woof " << endl;
}
