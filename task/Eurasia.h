#pragma once

#include "Continent.h"
#include "Elk.h"
#include "Tiger.h"

using namespace std;

class Eurasia :
	public Continent
{
public:
	Herbivore* CreateHerbivore() override
	{
		return new Elk();
	}

	Carnivore* CreateCarnivore() override
	{
		return new Tiger();
	}
};