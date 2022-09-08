#pragma once

#include <iostream>
#include <ostream>

#include "Carnivore.h"

using namespace std;

// Лев (Lion) - конкретный продукт;
class Lion :
	public Carnivore
{
	double m_power = GetRandomNumber(15, 50); // Сила - свойство плотоядного животного;
public:
	void PrintCarnivore() override
	{
		cout << "I am a lion and my strength is " << m_power << '.' << endl;
	}

	/*Кушать травоядное животное - метод конкретного
	продукта, при выполнении которого проверяется,
	является ли сила плотоядного животного больше, чем вес
	травоядного, которого он съедает.Если является, то
	хищник получает + 10 к силе, иначе, если сила меньше,
	чем вес травоядного животного, то сила плотоядного
	уменьшаются на - 10.*/
	void Eat(Herbivore* herbivore) override;

	// Генерируем рандомное число между значениями min и max.
	// Предполагается, что функцию srand() уже вызывали
	int GetRandomNumber(int min, int max);
};