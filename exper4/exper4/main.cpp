#include <iostream>
#include "Speciality.h"
#include "Student.h"

int main()
{
	Speciality* sp = new Speciality("�������ѧ�뼼��",40);
	Student* s = new Student("С��",18,sp);
	s->showStu();
	sp->showSp();

	std::cin.get();

//����:С��       ���� : 18 רҵ : �������ѧ�뼼��
//���� : �������ѧ�뼼��   ѧ�� : 40
	return 0;
}