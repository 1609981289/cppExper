#include "Auto.h"

Auto::Auto(std::string num, short wheel)
{
	this->num = num;
	this->wheel = wheel;
}

void Auto::setNum(std::string num)
{
	this->num = num;
}

std::string Auto::getNum()
{
	return this->num;
}

void Auto::setWheel(short wheel)
{
	this->wheel = wheel;
}

short Auto::getWheel()
{
	return this->wheel;
}