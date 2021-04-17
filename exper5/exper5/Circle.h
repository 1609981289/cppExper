#pragma once
#include "Point.h"

class Circle:public Point
{
public:
	Circle(float x,float y,double r);
	Circle() {}
	~Circle(){}
	double area();
	void setR(double r);
	double getR();
private:
	double r;
};

