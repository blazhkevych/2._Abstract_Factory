#pragma once
#include <iostream>
#include <ostream>

#include "Herbivore.h"
using namespace std;

// Бизон (Bison) - конкретный продукт;
class Bison :
    public Herbivore
{

	double m_weight{}; // Вес - свойство травоядного животного;
	bool m_life{ true }; // Жизнь (Life) - свойство животного (характеризует живое ли существо);
public:
	void PrintHerbivore()
	{
		cout << "I am Bison !" << endl;
	}
	void EatGrass() // Кушать траву (Eat grass) - метод конкретного продукта (добавляют к весу + 10);
	{
		m_weight += 10;
	}
};