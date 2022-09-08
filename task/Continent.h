#pragma once
#include "Herbivore.h"
#include "Carnivore.h"

// Континент (Continent) - абстрактная фабрика;
class Continent abstract
{
public:
	virtual Herbivore* CreateHerbivores() abstract;
	virtual Carnivore* CreateCarnivore() abstract;
};