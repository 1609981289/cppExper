#include <iostream>
#include "Student.h"

using namespace std;

void Student::display()
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}

void Student::set_value(int num, char name[20], char sex)
{
	this->num = num;
	strcpy_s(this->name, name);
	this->sex = sex;
}