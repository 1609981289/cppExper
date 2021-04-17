#pragma once
#include "Shape.h"

class Rectangele:public Shape
{
public:
	Rectangele(double w,double h);
	Rectangele() {}
	~Rectangele(){}
	void setW(double w);
	void setH(double h);
	double getW();
	double getH();
	// ͨ�� Shape �̳�
	virtual double area() override;
private:
	double w;
	double h;
};

