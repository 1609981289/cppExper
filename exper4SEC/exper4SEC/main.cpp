#include<iostream>
#include "Column.h"
#include "Cone.h"
#include "Globe.h"

int main()
{
	//球
	Globe* globe = new Globe(4);
	std::cout << "半径为:"<<globe->getR()<<"的球的体积为:"<<globe->bulk() <<"\n\t面积为:"<<globe->area()<< std::endl;
	delete globe;
	//圆柱
	Column* column = new Column(4, 5);
	std::cout << "半径为:" << column->getR() << ",高为:" << column->getH() << "的圆柱的体积为:" << column->bulk()<<"\n\t面积为:" <<column->area()<< std::endl;
	delete column;
	//圆锥
	Cone* cone = new Cone(6,5);
	std::cout << "半径为:" << cone->getR() << ",高为:" << cone->getH() << "的圆柱的体积为:" << cone->bulk() << "\n\t面积为:" << cone->area() << std::endl;
	delete cone;

//半径为:4的球的体积为 : 201.062
//面积为 : 201.062
//半径为 : 4, 高为 : 5的圆柱的体积为 : 251.327
//面积为 : 226.195
//半径为 : 6, 高为 : 5的圆柱的体积为 : 188.496
//面积为 : 162.171
	std::cin.get();
	return 0;
}