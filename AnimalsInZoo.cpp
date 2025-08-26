#include "AnimalsInZoo.h"
#include "Animal.h"
#include <stdlib.h>
#include <iostream>

AnimalsInZoo::AnimalsInZoo() : numAnimals(0) {};
AnimalsInZoo::AnimalsInZoo(Animal ani) {
	animal = ani;
	numAnimals = 1;
}
void AnimalsInZoo::display() {
	std::cout << "numAnimals : " << numAnimals << " ";
	if (numAnimals == 1) {animal.display();};
}
