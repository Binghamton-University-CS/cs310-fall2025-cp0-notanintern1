#pragma once
#include "Animal.h"

class AnimalsInZoo {
	private:
		int numAnimals;
		Animal animal;
	public:
		AnimalsInZoo();
		AnimalsInZoo(Animal ani);
		void display();
};
