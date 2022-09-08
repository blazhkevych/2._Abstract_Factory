#pragma once
#include "Continent.h"

// Мир животных (Animal World) – клиент;
class AnimalWorld
{
	Continent* m_pContinent;
public:
	AnimalWorld(Continent* continent) 
	{
		m_pContinent = continent;
	}

	// Питание травоядных (Meals herbivores) - метод клиента,
	// который инициирует всех травоядных приступить к кормежке;
	void MealsHerbivores();

	// Питание плотоядных (Nutrition carnivores) - метод клиента,
	// который заставит всех плотоядных охотится на травоядных.
	void NutritionCarnivores(Herbivore* herbivore);
};