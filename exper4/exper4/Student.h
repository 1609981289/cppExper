#pragma once
#include "Speciality.h"

class Student
{
public:
	Student(const char* name, int age,Speciality*sp);
	void showStu();
private:
	char name[20];
	int age;
	Speciality*sp;
};

