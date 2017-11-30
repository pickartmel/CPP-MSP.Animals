#include "Tiger.h"



Tiger::Tiger(string name) : Animal(name)
{

}


void Tiger::Speak()
{
	cout << GetName() << " says: Roar!" << endl;
}