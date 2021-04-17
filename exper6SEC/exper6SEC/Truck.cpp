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
	std::cout << "车牌号:" << this->getNum() << ",车轮数:" << this->getWheel() << ",载重吨位:" << this->getLoadTon() << std::endl;
}
