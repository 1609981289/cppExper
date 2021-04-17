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
	std::cout << "���ƺ�:" << this->getNum() << ",������:" << this->getWheel() << ",������:" << this->getOverloadNum() << std::endl;
}
