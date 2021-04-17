#include "Employee.h"
#include <iostream>

int Employee::count = 0;
double Employee::totalWage = 0;

Employee::Employee(int num, const char* name, const char* sex, double wage)
{
	this->num = num;
	strcpy_s(this->name, name);
	strcpy_s(this->sex,sex);
	this->wage = wage;
	this->count += 1;
	this->totalWage += wage;
}

void Employee::ShowBase()
{
	std::cout << "编号:" << this->num << "\t" << "姓名:" << this->name << "\t" << "性别:" << this->sex <<"\t"<< "工资:"<<this->wage<<std::endl;
}

void Employee::ShowStatic()
{
	std::cout << "人数:" << count << "\t总工资:" << totalWage << std::endl;
}