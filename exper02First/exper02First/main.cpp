#include <iostream>
#include "Triangle.h"

using namespace std;

int main()
{
	cout << "(1)ʹ���вι��캯��" << endl;
	Triangle tri(7, 8, 9);
	tri.showMessage();

	cout << "(2)����޲ι��캯����Ĭ�ϸ��߳�Ϊ1" << endl;
	Triangle tri1;
	tri1.showMessage();

	cout << "(3)ʹ��Ĭ��ֵ���вι��캯����������ʵ��ʱ��Ĭ�ϱ߳���1" << endl;
	Triangle tri2(1.5);
	tri2.showMessage();

	Triangle tri3(1.5, 1.5);
	tri3.showMessage();

	Triangle tri4(7, 8, 9);
	tri4.showMessage();

	cout << "(4)ʹ�ó�Ա��ʼ���б�����ݳ�Ա���г�ʼ��" << endl;
	Triangle tri5(7, 8, 9);
	tri5.showMessage();
	return 0;
}