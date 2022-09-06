#pragma once
#include <iostream>

#include "Herbivore.h"
using namespace std;

// Антилопа Гну (Wildebeest) - конкретный продукт;
class Wildebeest :
	public Herbivore
{
	double m_weight{}; // Вес - свойство травоядного животного;
	bool m_life{ true }; // Жизнь (Life) - свойство животного (характеризует живое ли существо);
public:
	void PrintHerbivore()
	{
		cout << "I am Wildebeest !" << endl;
	}
	void EatGrass() // Кушать траву (Eat grass) - метод конкретного продукта (добавляют к весу + 10);
	{
		m_weight += 10;
	}

	double get_weight() { return m_weight; } // Получить вес травоядного.
	void set_life(bool life) { m_life = life; } // Установить значение поля "жизнь".
};