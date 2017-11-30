#include "Animal.h"


Animal::Animal(string name)
{
	m_name = name;
}

void Animal::Move()
{
	cout << m_name << " is moving." << endl;
}




