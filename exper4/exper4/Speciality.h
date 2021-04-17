#pragma once
class Speciality
{
public:
	Speciality(const char*name,int score);
	void showSp();
	char* getName();
private:
	char s_name[20];
	int  s_score;
};

