#pragma once
#include "Continent.h"
#include <iostream>

#include "Lion.h"
#include "Wildebeest.h"
using namespace std;

//Африка (Africa) - конкретная фабрика;
class Africa :
	public Continent
{
	 Herbivore* CreateHerbivores() override
	{
		return new Wildebeest();
	}

	 Carnivore* CreateCarnivore() override
	{
		return new Lion();
	}
};