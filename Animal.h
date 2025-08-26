#pragma once
#include <stdlib.h>
#include <string>

class Animal
{
	public:
		Animal(std::string speciesName, unsigned int discoveryYear);
		Animal();
		void display();
	private:
		std::string name;
		unsigned int year;
};
