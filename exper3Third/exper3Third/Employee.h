#pragma once
class Employee
{
public:
	Employee(int num,const char*name,const char*sex,double wage);
	void ShowBase();
	static void ShowStatic();
private:
	int num;
	char  name[20];
	char sex[5];
	double wage;
	static int count;
	static double totalWage;
};

