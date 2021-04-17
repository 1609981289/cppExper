#pragma once
#include "Shape.h"

class Triangle:public Shape
{
public:
	Triangle(double a,double b,double c);
	Triangle() {}
	~Triangle() {}
	void setA(double a);
	void setB(double b);
	void setC(double c);
	double getA();
	double getB();
	double getC();
	// ͨ�� Shape �̳�
	virtual double area() override;
private:
	double a;
	double b;
	double c;
};

