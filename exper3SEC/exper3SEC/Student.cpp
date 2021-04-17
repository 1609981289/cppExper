#include "Student.h"

Student::Student(int num, double score)
{
	this->num = num;
	this->score = score;
}

void Student::setNum(int num)
{
	this->num = num;
}

void Student::setScore(double score)
{
	this->score = score;
}

int Student::getNum()
{
	return this->num;
}

double Student::getScore()
{
	return this->score;
}

