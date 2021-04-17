#include <iostream>
#include "Student.h"

int max(Student* arr);

int main()
{
	Student stud[5] =
	{
		Student(101,78.5),
		Student(102,85.5),
		Student(103,100),
		Student(104,98.5),
		Student(105,95.5)
	};
	//输出1，3，5学生信息
	/*int i = 0;
	for (i = 0;i<sizeof(stud)/sizeof(Student);i++)
	{
		switch (i)
		{
		case 0:
		case 2:
		case 4:
			std::cout << "学号:" << stud[i].getNum() << "\t" << "分数:" << stud[i].getScore() << std::endl;
			break;
		default:
			break;
		}
	}*/
	Student* index = stud;
	int i = 0;
	for (i = 0;i<3;i++,index+=2)
	{
		std::cout << "学号:" << index->getNum() << "\t" << "分数:" << index->getScore() << std::endl;
	}

	/// <summary>
	/// 输出成绩最高者的学号
	/// </summary>
	/// <returns></returns>
	std::cout << "5个学生中成绩最高者的学号为:" << max(stud) << std::endl;

	std::cin.get();
	return 0;
}

int max(Student* arr)
{
	int i = 0;
	Student* max = arr;
	for (i=0;i<5;i++)
	{
		if ((arr+i)->getScore()>max->getScore())
		{
			
			max = arr + i;
		}
	}
	return max->getNum();
}
//学号:101        分数 : 78.5
//学号 : 103        分数 : 100
//学号 : 105        分数 : 95.5
//5个学生中成绩最高者的学号为 : 103