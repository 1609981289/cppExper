#pragma once
#include "Auto.h"

class Truck:public Auto
{
public:
	Truck() {}
	Truck(std::string num,short wheel,int loadTon);
	~Truck() {}
	void setLoadTon(int loadTon);
	int getLoadTon();
	// Í¨¹ý Auto ¼Ì³Ð
	virtual void showInfo() override;
private:
	int loadTon;
};

