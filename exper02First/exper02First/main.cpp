#include <iostream>
#include "Triangle.h"

using namespace std;

int main()
{
	cout << "(1)使用有参构造函数" << endl;
	Triangle tri(7, 8, 9);
	tri.showMessage();

	cout << "(2)设计无参构造函数，默认各边长为1" << endl;
	Triangle tri1;
	tri1.showMessage();

	cout << "(3)使用默认值的有参构造函数，不给定实参时，默认边长是1" << endl;
	Triangle tri2(1.5);
	tri2.showMessage();

	Triangle tri3(1.5, 1.5);
	tri3.showMessage();

	Triangle tri4(7, 8, 9);
	tri4.showMessage();

	cout << "(4)使用成员初始化列表对数据成员进行初始化" << endl;
	Triangle tri5(7, 8, 9);
	tri5.showMessage();
	return 0;
}