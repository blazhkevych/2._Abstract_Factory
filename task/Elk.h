#pragma once

#include <iostream>

#include "Herbivore.h"

using namespace std;

// Лось (Elk) - конкретный продукт.
class Elk :
	public Herbivore
{
	double m_weight = GetRandomNumber(1, 50);	// Вес - свойство травоядного животного.
	bool m_life{ true };								// Жизнь (Life) - свойство животного (характеризует живое ли существо).
public:
	void PrintHerbivore() override
	{
		cout << "I am a " << m_weight << " kg. Elk !" << endl;
	}

	// Кушать траву (Eat grass) - метод конкретного продукта (добавляют к весу + 10).		
	void EatGrass() override
	{
		m_weight += 10;
		cout << "I eat grass ! Now my weight is " << m_weight << " kg. !" << endl;
	}

	double get_weight() { return m_weight; }		// Получить вес травоядного.
	void set_life(bool life) { m_life = life; }		// Установить значение поля "жизнь".
	bool get_life() { return  m_life; }				// Получить значение поля "жизнь".

	// Генерируем рандомное число между значениями min и max.
	// Предполагается, что функцию srand() уже вызывали.
	int GetRandomNumber(int min, int max);
};