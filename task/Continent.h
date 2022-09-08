#pragma once

#include "Herbivore.h"
#include "Carnivore.h"

// Континент (Continent) - абстрактная фабрика;
class Continent abstract
{
public:
	virtual Herbivore* CreateHerbivore() abstract;
	virtual Carnivore* CreateCarnivore() abstract;
};