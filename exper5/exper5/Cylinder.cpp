#include "Cylinder.h"
#define _USE_MATH_DEFINES
#include <math.h>

Cylinder::Cylinder(float x, float y, double r, double h) :Circle(x,y,r)
{
	this->setX(x);
	this->setY(y);
	this->setH(h);
	this->setR(r);
}

void Cylinder::setH(double h)
{
	this->h = h;
}

double Cylinder::getH()
{
	return this->h;
}

double Cylinder::volume()
{
	return M_PI * this->getR() * this->getR() * h;
}

double Cylinder::area()
{
	return M_PI * this->getR() * this->getR() * 2 + 2 * M_PI * this->getR() * h;
}