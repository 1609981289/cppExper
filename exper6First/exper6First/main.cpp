#include <iostream>
#include "Circle.h"
#include "Rectangele.h"
#include "Triangle.h"

int main()
{
	Circle* c = new Circle(5);
	std::cout << "半径为:" << c->getR() << "的圆的面积为:" << c->area() << std::endl;

	Rectangele* r = new Rectangele(2,4);
	std::cout << "宽为:" << r->getW() << ",高为:" << r->getH() << "的矩形的面积为:" << r->area() << std::endl;

	Triangle* t = new Triangle(2, 4, 3);
	if (t==NULL)
	{
		std::cout << "该边长构造不出三角形!" << std::endl;
		return 0;
	}
	std::cout << "边长为:" << t->getA() << "," << t->getB() << "," << t->getC() << "的三角形的面积为:" << t->area() << std::endl;

	delete t;
	t = NULL;

	delete r;
	r = NULL;

	delete c;
	c = NULL;


//半径为:5的圆的面积为 : 78.5398
//宽为 : 2, 高为 : 4的矩形的面积为 : 8
//边长为 : 2, 4, 3的三角形的面积为 : 2.90474

	std::cin.get();
	return 0;
}