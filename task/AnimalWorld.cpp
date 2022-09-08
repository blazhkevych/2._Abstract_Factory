#include "AnimalWorld.h"

// Питание травоядных (Meals herbivores) - метод клиента,
// который инициирует всех травоядных приступить к кормежке;
void AnimalWorld::MealsHerbivores()
{
	reinterpret_cast<Herbivore*>(m_pContinent)->EatGrass();
	//m_pContinent->CreateHerbivores()->EatGrass();
}

// Питание плотоядных (Nutrition carnivores) - метод клиента,
// который заставит всех плотоядных охотится на травоядных.
void AnimalWorld::NutritionCarnivores(Herbivore* herbivore)
{
	reinterpret_cast<Carnivore*>(m_pContinent)->Eat(herbivore);
}