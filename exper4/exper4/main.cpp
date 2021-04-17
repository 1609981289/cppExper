#include <iostream>
#include "Speciality.h"
#include "Student.h"

int main()
{
	Speciality* sp = new Speciality("计算机科学与技术",40);
	Student* s = new Student("小明",18,sp);
	s->showStu();
	sp->showSp();

	std::cin.get();

//姓名:小明       年龄 : 18 专业 : 计算机科学与技术
//名称 : 计算机科学与技术   学分 : 40
	return 0;
}