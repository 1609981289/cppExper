#include<iostream>
#include "Column.h"
#include "Cone.h"
#include "Globe.h"

int main()
{
	//��
	Globe* globe = new Globe(4);
	std::cout << "�뾶Ϊ:"<<globe->getR()<<"��������Ϊ:"<<globe->bulk() <<"\n\t���Ϊ:"<<globe->area()<< std::endl;
	delete globe;
	//Բ��
	Column* column = new Column(4, 5);
	std::cout << "�뾶Ϊ:" << column->getR() << ",��Ϊ:" << column->getH() << "��Բ�������Ϊ:" << column->bulk()<<"\n\t���Ϊ:" <<column->area()<< std::endl;
	delete column;
	//Բ׶
	Cone* cone = new Cone(6,5);
	std::cout << "�뾶Ϊ:" << cone->getR() << ",��Ϊ:" << cone->getH() << "��Բ�������Ϊ:" << cone->bulk() << "\n\t���Ϊ:" << cone->area() << std::endl;
	delete cone;

//�뾶Ϊ:4��������Ϊ : 201.062
//���Ϊ : 201.062
//�뾶Ϊ : 4, ��Ϊ : 5��Բ�������Ϊ : 251.327
//���Ϊ : 226.195
//�뾶Ϊ : 6, ��Ϊ : 5��Բ�������Ϊ : 188.496
//���Ϊ : 162.171
	std::cin.get();
	return 0;
}