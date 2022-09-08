#include "Lion.h"
#include "Wildebeest.h"

/*
Кушать травоядное животное - метод конкретного
продукта, при выполнении которого проверяется,
является ли сила плотоядного животного больше, чем вес
травоядного, которого он съедает.Если является, то
хищник получает + 10 к силе, иначе, если сила меньше,
чем вес травоядного животного, то сила плотоядного
уменьшаются на - 10.
*/
void Lion::Eat(Herbivore* herbivore)
{
	if (m_power > herbivore->get_weight())
	{
		m_power += 10;
		herbivore->set_life(false);
		cout << "I ate a Herbivore and now my strength is " << m_power << '.' << endl;
	}
	else
	{
		m_power -= 10;
		cout << "I couldn't eat the Herbivore and now my strength is " << m_power << '.' << endl;
	}
}

// Генерируем рандомное число между значениями min и max.
// Предполагается, что функцию srand() уже вызывали.
int Lion::GetRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	// Равномерно распределяем рандомное число в нашем диапазоне.
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}