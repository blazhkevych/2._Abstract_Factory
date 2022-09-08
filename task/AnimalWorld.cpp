#include "AnimalWorld.h"
#include "Wildebeest.h"

// Питание травоядных (Meals herbivores) - метод клиента,
// который инициирует всех травоядных приступить к кормежке.
void AnimalWorld::MealsHerbivores()
{
	for (Herbivore* herbivore : m_herbivores)
	{
		herbivore->PrintHerbivore();
		herbivore->EatGrass();
		cout << endl;
	}
}

// Питание плотоядных (Nutrition carnivores) - метод клиента,
// который заставит всех плотоядных охотится на травоядных.
void AnimalWorld::NutritionCarnivores()
{
	for (int i = 0; i < m_carnivores.size(); i++)
	{
		m_carnivores[i]->PrintCarnivore();
		m_carnivores[i]->Eat(m_herbivores[i]);
		cout << endl;
	}

	for (int i = 0; i < m_herbivores.size(); i++)
	{
		if (m_herbivores[i]->get_life() == false)
		{
			m_herbivores.erase(m_herbivores.begin() + i);
			i--;
		}
	}
}