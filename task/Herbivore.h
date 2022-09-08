#pragma once

// Травоядное животное(Herbivore) - абстрактный продукт;
class Herbivore abstract
{
public:
	virtual void PrintHerbivore() abstract;
	virtual void EatGrass() abstract;			// Кушать траву (Eat grass).
	virtual bool get_life() abstract;			// Получить значение поля "жизнь".
	virtual void set_life(bool life) abstract;	// Установить значение поля "жизнь".
	virtual double get_weight() abstract;		// Получить вес травоядного.
};