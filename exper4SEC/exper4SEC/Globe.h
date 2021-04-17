#pragma once
#include "Cirle.h"

class Globe :public Cirle
{
public :
	Globe(double r) :Cirle(r)
	{
		this->r = r;
	}
	// ͨ�� Cirle �̳�
	virtual double area() override;

	// ͨ�� Cirle �̳�
	virtual double bulk() override;
private:
	double r;
};
