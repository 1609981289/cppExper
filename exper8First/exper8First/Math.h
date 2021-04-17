#pragma once
#include <iostream>
#include <string>
using namespace std;

class Math
{
public:
	static Math& getMath();
	void Min(int,int);
	void Min(float, float);
	void Min(double, double);
	void Min(char, char);
	void Min(string, string);
private:
	Math() {}
	static Math*math;
};

