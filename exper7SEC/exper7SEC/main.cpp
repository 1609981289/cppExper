#include "Date.h"

int main()
{
	//ͨ�����캯��
	Date d1(2021, 4, 16);
	d1.addDay(70);
	cout << d1 << endl;
	d1.subDay(120);
	cout << d1 << endl;

	Date d2(1900,1,1);
	cout << d2 - d1 << endl;

	//ͨ���û����� 
	Date d3;
	cin >> d3;
	cout << d3<<endl;
	Date d4;
	cin >> d4; 
	cout << d3 << endl;
	cout << d4 - d3 << endl;


//	2021 - 6 - 25
//
//	2021 - 5 - 5
//
//	44319
//	��������:
//	�������:2023
//	�����·� : 9
//	������ : 4
//	2023 - 9 - 4
//
//	�������� :
//	������� : 2021
//	�����·� : 9
//	������ : 4
//	2023 - 9 - 4
//
//	730

	cin.get();
	return 0;
}