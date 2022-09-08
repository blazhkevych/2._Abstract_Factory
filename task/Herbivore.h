#pragma once

// Травоядное животное(Herbivore) - абстрактный продукт;
class Herbivore abstract
{
public:
	virtual void PrintHerbivore() abstract;
	virtual void EatGrass() abstract; // Кушать траву (Eat grass).
};