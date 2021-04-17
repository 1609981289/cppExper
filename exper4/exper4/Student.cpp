#include "Student.h"
#include <iostream>

Student::Student(const char* name, int age, Speciality*sp)
{
	strcpy_s(this->name, name);
	this->age = age;
	this->sp = sp;
}

void Student::showStu()
{
	std::cout << "����:" << name << "\t����:" << age << "\tרҵ:" << sp->getName() << std::endl;
}