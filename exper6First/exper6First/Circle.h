#pragma once
#include "Shape.h"

class Circle:public Shape
{
public:
	Circle() {}
	Circle(double r);
	~Circle() {}
	void setR(double r);
	double getR();
	// ͨ�� Shape �̳�
	virtual double area() override;
private:
	double r;
};

