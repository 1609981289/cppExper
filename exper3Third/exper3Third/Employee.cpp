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
	std::cout << "���:" << this->num << "\t" << "����:" << this->name << "\t" << "�Ա�:" << this->sex <<"\t"<< "����:"<<this->wage<<std::endl;
}

void Employee::ShowStatic()
{
	std::cout << "����:" << count << "\t�ܹ���:" << totalWage << std::endl;
}