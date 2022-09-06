#pragma once
#include "Herbivore.h"

// Плотоядное животное(Carnivore) - абстрактный продукт;
class Carnivore abstract
{
public:
	virtual void Eat(Herbivore* herbivore) abstract; // Кушать травоядное.
};