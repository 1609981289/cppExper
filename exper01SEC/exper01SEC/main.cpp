#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
	Student stud;
	int num = 0;
	char name[20] = {0};
	char sex = '0';
	cout << "����ѧ��:";
	cin >> num;
	cout << "��������:";
	cin >> name;
	cout << "tips:0Ϊ�У�1ΪŮ" << endl;
	cout << "�����Ա�:";
	cin >> sex;
	stud.set_value(num,name,sex);
	stud.display();
	cout << "tips:0Ϊ�У�1ΪŮ" << endl;
	return 0;
}