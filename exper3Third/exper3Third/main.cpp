#include <iostream>
#include "Employee.h"

int main()
{
	Employee e[5] = {
		Employee(1,"小红","女",5325.3),
		Employee(2,"小明","男",6432.6),
		Employee(3,"小彤","女",7352.1),
		Employee(4,"小力","男",4356.4),
		Employee(5,"小王","男",8152.4)
	};

	int i = 0;
	for (i = 0; i < 5; i++)
	{
		e[i].ShowBase();
	}
	
	Employee::ShowStatic();

	std::cin.get();
//编号:1  姓名 : 小红       性别 : 女 工资 : 5325.3
//编号 : 2  姓名 : 小明       性别 : 男 工资 : 6432.6
//编号 : 3  姓名 : 小彤       性别 : 女 工资 : 7352.1
//编号 : 4  姓名 : 小力       性别 : 男 工资 : 4356.4
//编号 : 5  姓名 : 小王       性别 : 男 工资 : 8152.4
//人数 : 5  总工资 : 31618.8
	return 0;
}