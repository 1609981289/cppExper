#pragma once
class Student
{
public:
	Student(int num,double score);
	void setNum(int num);
	void setScore(double score);
	int getNum();
	double getScore();
private:
	int num;
	double score;
};

