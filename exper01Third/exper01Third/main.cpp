#include <iostream>
#include "Cube.h"

using namespace std;

int main()
{
	float l1;
	float w1;
	float h1;
	cout << "���볤:";
	cin >> l1;
	cout << "�����";
	cin >> w1;
	cout << "�����";
	cin >> h1;
	Cube cube1(l1,w1,h1);
	cube1.printV();

	float v1 = cube1.getV();
	cout << "���Ϊ:" << v1 << endl;

	float l2;
	float w2;
	float h2;
	cout << "���볤:";
	cin >> l2;
	cout << "�����";
	cin >> w2;
	cout << "�����";
	cin >> h2;
	Cube cube2;
	cube2.setHeight(h2);
	cube2.setLength(l2);
	cube2.setWidth(w2);
	cube2.printV();

	float l3;
	float w3;
	float h3;
	cout << "���볤:";
	cin >> l3;
	cout << "�����";
	cin >> w3;
	cout << "�����";
	cin >> h3;
	Cube cube3(l3,w3,h3);
	cube3.printV();

	return 0;
}