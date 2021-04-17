#pragma once
#include <string>

class Auto
{
public:
	Auto(std::string num, short wheel);
	Auto() {}
	~Auto() {}
	void setNum(std::string);
	std::string getNum();
	void setWheel(short wheel);
	short getWheel();
	virtual void showInfo() = 0;
private:
	std::string num;
	short wheel;
};

