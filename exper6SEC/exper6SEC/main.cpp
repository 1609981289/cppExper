#include <iostream>
#include "Car.h"
#include "Truck.h"

int main()
{
	Car* c = new Car("��F000D",4,5);
	c->showInfo();

	Truck* t = new Truck("��AHA105", 8, 3);
	t->showInfo();

	delete t;
	t = NULL;

	delete c;
	c = NULL;


//���ƺ�:��F000D, ������ : 4, ������ : 5
//���ƺ� : ��AHA105, ������ : 8, ���ض�λ : 3

	std::cin.get();
	return 0;
}