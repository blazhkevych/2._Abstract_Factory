#pragma once

// Мир животных (Animal World) – клиент;
class AnimalWorld
{
public:
	// Питание травоядных (Meals herbivores) - метод клиента,
	// который инициирует всех травоядных приступить к кормежке;
	void MealsHerbivores();

	// Питание плотоядных (Nutrition carnivores) - метод клиента,
	// который заставит всех плотоядных охотится на травоядных.
	void NutritionCarnivores();
};
// оба метода работают через фабрики