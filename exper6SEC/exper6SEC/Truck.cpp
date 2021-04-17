#include "Truck.h"
#include <iostream>

Truck::Truck(std::string num, short wheel, int loadTon):Auto(num,wheel),loadTon(loadTon)
{
	this->setNum(num);
	this->setWheel(wheel);
}

void Truck::setLoadTon(int loadTon)
{
	this->loadTon = loadTon;
}

int Truck::getLoadTon()
{
	return this->loadTon;
}

void Truck::showInfo()
{
	std::cout << "���ƺ�:" << this->getNum() << ",������:" << this->getWheel() << ",���ض�λ:" << this->getLoadTon() << std::endl;
}
