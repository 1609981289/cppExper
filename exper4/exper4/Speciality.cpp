#include "Speciality.h"
#include<iostream>

Speciality::Speciality(const char* name, int score)
{
	strcpy_s(s_name, name);
	s_score = score;
}

void Speciality::showSp()
{
	std::cout << "����:" << s_name << "\tѧ��:" << s_score << std::endl;
}

char* Speciality::getName()
{
	return s_name;
}