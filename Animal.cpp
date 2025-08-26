#include "Animal.h"
#include <stdlib.h>
#include <string>
#include <iostream>

Animal::Animal(std::string speciesName, unsigned int discoveryYear) {
	name = speciesName;
	year = discoveryYear;
}
Animal::Animal() : name(""), year(0) {};
void Animal::display() {
	std::cout << name << " [" << year << "]" << std::endl;
}


