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
	std::cout << "姓名:" << name << "\t年龄:" << age << "\t专业:" << sp->getName() << std::endl;
}