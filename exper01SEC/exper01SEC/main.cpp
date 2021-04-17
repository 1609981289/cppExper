#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
	Student stud;
	int num = 0;
	char name[20] = {0};
	char sex = '0';
	cout << "输入学号:";
	cin >> num;
	cout << "输入姓名:";
	cin >> name;
	cout << "tips:0为男，1为女" << endl;
	cout << "输入性别:";
	cin >> sex;
	stud.set_value(num,name,sex);
	stud.display();
	cout << "tips:0为男，1为女" << endl;
	return 0;
}