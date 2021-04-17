#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
class Cirle
{
public:
	Cirle(double r);
	Cirle() {}
	void setR(double r);
	double getR();
	virtual double area() = 0;
	virtual double bulk() = 0;

private:
	double r;
};
