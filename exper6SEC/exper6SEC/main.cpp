#include <iostream>
#include "Car.h"
#include "Truck.h"

int main()
{
	Car* c = new Car("云F000D",4,5);
	c->showInfo();

	Truck* t = new Truck("鄂AHA105", 8, 3);
	t->showInfo();

	delete t;
	t = NULL;

	delete c;
	c = NULL;


//车牌号:云F000D, 车轮数 : 4, 载人数 : 5
//车牌号 : 鄂AHA105, 车轮数 : 8, 载重吨位 : 3

	std::cin.get();
	return 0;
}