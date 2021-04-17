#include "Car.h"
#include <iostream>

Car::Car(std::string num, short wheel, short overloadNum):Auto(num,wheel)
{
	this->setNum(num);
	this->setWheel(wheel);
	this->overloadNum = overloadNum;
}

void Car::setOverloadNum(short overloadNum)
{
	this->overloadNum = overloadNum;
}

short Car::getOverloadNum()
{
	return this->overloadNum;
}

void Car::showInfo()
{
	std::cout << "车牌号:" << this->getNum() << ",车轮数:" << this->getWheel() << ",载人数:" << this->getOverloadNum() << std::endl;
}
