#pragma once
#include "Cirle.h"

class Globe :public Cirle
{
public :
	Globe(double r) :Cirle(r)
	{
		this->r = r;
	}
	// 通过 Cirle 继承
	virtual double area() override;

	// 通过 Cirle 继承
	virtual double bulk() override;
private:
	double r;
};
