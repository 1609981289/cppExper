#include <iostream>
#include "Point.h"
#include"Cylinder.h"
#include "Circle.h"

int main()
{
	Point* p = new Point(3,3);
	Circle* c = new Circle(p->getX(),p->getY(),5);
	std::cout << "位置在:(" << c->getX() << "," << c->getY() << "),半径为:" << c->getR() << "的圆的面积:" << c->area() << std::endl;
	Cylinder* cylinder = new Cylinder(p->getX(), p->getY(), c->getR(), 6);
	std::cout << "位置在:(" << cylinder->getX() << "," << cylinder->getY() << "),半径为:" << cylinder->getR()
		<<",高为:"<<cylinder->getH()<< "的圆柱的面积:" << c->area() <<",体积为:"<<cylinder->volume()<< std::endl;
	
	delete cylinder;
	cylinder = NULL;
	delete c;
	c = NULL;
	delete p;
	p = NULL;

//位置在:(3, 3), 半径为 : 5的圆的面积 : 78.5398
//位置在 : (3, 3), 半径为 : 5, 高为 : 6的圆柱的面积 : 78.5398, 体积为 : 471.239

	std::cin.get();
	return 0;
}