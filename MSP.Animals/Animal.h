#pragma once
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Animal
{
public:
	Animal(string name);

	Animal() {};

	virtual void Move(); //virtual - can be overridden by subclass(derived-class)

	virtual void Speak() = 0; //(Pure virtual) Abstract MUST be overridden

	virtual string GetName() { return m_name; }

private:


string m_name;


};