#include "Triangle.h"
#include <iostream>

Triangle::Triangle(double a, double b, double c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

void Triangle::showMessage()
{
	std::cout << "�����ε����߳�Ϊ:" << a << ' ' << b << ' ' << c << std::endl;
	std::cout << "�����ε��ܳ�Ϊ:" <<this->perimeter()<< std::endl;
	std::cout << "�����ε����Ϊ:" <<this->area()<< std::endl<<std::endl;
}

double Triangle::perimeter()
{
	return this->a + this->b + this->c;
}

double Triangle::area()
{
	double p = (this->a + this->b + this->c) / 2;
	return sqrt(p*(p-this->a)*(p-this->b)*(p-this->c));
}