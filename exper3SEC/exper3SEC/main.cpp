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
	//���1��3��5ѧ����Ϣ
	/*int i = 0;
	for (i = 0;i<sizeof(stud)/sizeof(Student);i++)
	{
		switch (i)
		{
		case 0:
		case 2:
		case 4:
			std::cout << "ѧ��:" << stud[i].getNum() << "\t" << "����:" << stud[i].getScore() << std::endl;
			break;
		default:
			break;
		}
	}*/
	Student* index = stud;
	int i = 0;
	for (i = 0;i<3;i++,index+=2)
	{
		std::cout << "ѧ��:" << index->getNum() << "\t" << "����:" << index->getScore() << std::endl;
	}

	/// <summary>
	/// ����ɼ�����ߵ�ѧ��
	/// </summary>
	/// <returns></returns>
	std::cout << "5��ѧ���гɼ�����ߵ�ѧ��Ϊ:" << max(stud) << std::endl;

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
//ѧ��:101        ���� : 78.5
//ѧ�� : 103        ���� : 100
//ѧ�� : 105        ���� : 95.5
//5��ѧ���гɼ�����ߵ�ѧ��Ϊ : 103