#pragma once
#include "Cirle.h"
class Cone:public Cirle
{
public:
	Cone(double r,double h);
	void setH(double);
	double getH();
	// Í¨¹ý Cirle ¼Ì³Ð
	virtual double area() override;

	virtual double bulk() override;
private:
	double r;
	double h;
};

