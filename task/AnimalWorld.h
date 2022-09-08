#pragma once

#include <vector>

#include "Continent.h"

using namespace std;

// Мир животных (Animal World) – клиент.
class AnimalWorld
{
	Continent* m_pContinent;

	// Вектор указателей на травоядных животных(Herbivore) - абстрактный продукт.
	vector<Herbivore*> m_herbivores;

	// Вектор указателей на плотоядных животных(Carnivore) - абстрактный продукт.
	vector<Carnivore*> m_carnivores;
public:
	AnimalWorld(Continent* continent)
	{
		m_pContinent = continent;
		for (int i = 0; i < 5; i++)
		{
			m_herbivores.push_back(m_pContinent->CreateHerbivore());
			m_carnivores.push_back(m_pContinent->CreateCarnivore());
		}
	}

	// Питание травоядных (Meals herbivores) - метод клиента,
	// который инициирует всех травоядных приступить к кормежке.
	void MealsHerbivores();

	// Питание плотоядных (Nutrition carnivores) - метод клиента,
	// который заставит всех плотоядных охотится на травоядных.
	void NutritionCarnivores();
};