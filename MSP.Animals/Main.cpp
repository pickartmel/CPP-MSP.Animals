#include <iostream>
#include <vector>
#include <conio.h>
#include "Animal.h"
#include "Dog.h"
#include "Tiger.h"


using namespace std;
int main()
{
	Dog d("Fido");
	d.Speak();
	d.Move();

	Tiger t("Shere Khan");
	t.Speak();
	t.Move();

	//we made this abstract so it todesnt work
	//Animal a("Minnie");
	//a.Move();
	//a.Speak();

	vector <Animal *> animals;
	animals.push_back(&d);
	animals.push_back(&t);

	for (int i = 0; i < animals.size(); i++)
	{
		animals[i]->Speak();
		animals[i]->Move();
	}

	Animal *pA = new Dog("Spot"); // implicitly casting a dog to an  animal (up is ok)
	Dog *pD = (Dog *)pA;//explicitly casting an animal to a dog (down)


	_getch();
	return 0;
}