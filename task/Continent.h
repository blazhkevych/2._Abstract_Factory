#pragma once
#include "Herbivore.h"
#include "Carnivore.h"
#include <iostream>

// Континент (Continent) - абстрактная фабрика;
class Continent abstract
{
	virtual Herbivore* CreateHerbivores() abstract;
	virtual Carnivore* CreateCarnivore() abstract;
};