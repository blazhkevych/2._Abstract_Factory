#pragma once

#include "Continent.h"
#include "Bison.h"
#include "Wolf.h"

using namespace std;

// Северная Америка (North America) - конкретная фабрика.
class North_America :
	public Continent
{
public:
	 Herbivore* CreateHerbivore() override
	{
		return new Bison();
	}

	 Carnivore* CreateCarnivore() override
	{
		return new Wolf();
	}
};