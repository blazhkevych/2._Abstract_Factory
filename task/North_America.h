#pragma once
#include "Continent.h"
#include "Bison.h"
#include "Wolf.h"
#include <iostream>
using namespace std;

//Северная Америка (North America) - конкретная фабрика;
class North_America :
	public Continent
{
	 Herbivore* CreateHerbivores() override
	{
		return new Bison();
	}

	 Carnivore* CreateCarnivore() override
	{
		return new Wolf();
	}
};