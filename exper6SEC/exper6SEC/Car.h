#pragma once
#include "Auto.h"

class Car:public Auto
{
public:
	Car() {}
	Car(std::string num,short wheel,short overloadNum);
	~Car() {}
	void setOverloadNum(short overloadNum);
	short getOverloadNum();
	// ͨ�� Auto �̳�
	virtual void showInfo() override;
private:
	short overloadNum;
};

