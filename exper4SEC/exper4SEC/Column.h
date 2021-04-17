#pragma once
#include "Cirle.h"

class Column:public Cirle
{
public:
	// Í¨¹ý Cirle ¼Ì³Ð
	virtual double area() override;
	virtual double bulk() override;
	Column(double r,double h);
	void setH(double h);
	double getH();
private:
	double r;
	double h;
};

