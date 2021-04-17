#pragma once
#include "Circle.h"

class Cylinder:public Circle
{
public:
	Cylinder(float x, float y, double r, double h);
	Cylinder() {}
	~Cylinder() {}
	void setH(double h);
	double getH();
	double volume();
	double area();
private:
	double h;
};

