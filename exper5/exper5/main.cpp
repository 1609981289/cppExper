#include <iostream>
#include "Point.h"
#include"Cylinder.h"
#include "Circle.h"

int main()
{
	Point* p = new Point(3,3);
	Circle* c = new Circle(p->getX(),p->getY(),5);
	std::cout << "λ����:(" << c->getX() << "," << c->getY() << "),�뾶Ϊ:" << c->getR() << "��Բ�����:" << c->area() << std::endl;
	Cylinder* cylinder = new Cylinder(p->getX(), p->getY(), c->getR(), 6);
	std::cout << "λ����:(" << cylinder->getX() << "," << cylinder->getY() << "),�뾶Ϊ:" << cylinder->getR()
		<<",��Ϊ:"<<cylinder->getH()<< "��Բ�������:" << c->area() <<",���Ϊ:"<<cylinder->volume()<< std::endl;
	
	delete cylinder;
	cylinder = NULL;
	delete c;
	c = NULL;
	delete p;
	p = NULL;

//λ����:(3, 3), �뾶Ϊ : 5��Բ����� : 78.5398
//λ���� : (3, 3), �뾶Ϊ : 5, ��Ϊ : 6��Բ������� : 78.5398, ���Ϊ : 471.239

	std::cin.get();
	return 0;
}