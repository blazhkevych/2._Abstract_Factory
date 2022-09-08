#pragma once

#include <iostream>

#include "Continent.h"
#include "Lion.h"
#include "Wildebeest.h"

using namespace std;

//Африка (Africa) - конкретная фабрика.
class Africa :
	public Continent
{
public:
	Herbivore* CreateHerbivore() override
	{
		return new Wildebeest();
	}

	Carnivore* CreateCarnivore() override
	{
		return new Lion();
	}
};