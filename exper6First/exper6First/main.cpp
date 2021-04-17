#include <iostream>
#include "Circle.h"
#include "Rectangele.h"
#include "Triangle.h"

int main()
{
	Circle* c = new Circle(5);
	std::cout << "�뾶Ϊ:" << c->getR() << "��Բ�����Ϊ:" << c->area() << std::endl;

	Rectangele* r = new Rectangele(2,4);
	std::cout << "��Ϊ:" << r->getW() << ",��Ϊ:" << r->getH() << "�ľ��ε����Ϊ:" << r->area() << std::endl;

	Triangle* t = new Triangle(2, 4, 3);
	if (t==NULL)
	{
		std::cout << "�ñ߳����첻��������!" << std::endl;
		return 0;
	}
	std::cout << "�߳�Ϊ:" << t->getA() << "," << t->getB() << "," << t->getC() << "�������ε����Ϊ:" << t->area() << std::endl;

	delete t;
	t = NULL;

	delete r;
	r = NULL;

	delete c;
	c = NULL;


//�뾶Ϊ:5��Բ�����Ϊ : 78.5398
//��Ϊ : 2, ��Ϊ : 4�ľ��ε����Ϊ : 8
//�߳�Ϊ : 2, 4, 3�������ε����Ϊ : 2.90474

	std::cin.get();
	return 0;
}