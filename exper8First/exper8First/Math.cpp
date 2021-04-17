#include "Math.h"

Math* Math::math = NULL;

Math& Math::getMath()
{
	if (math==NULL)
	{
		math = new Math();
	}
	return *math;
}

void Math::Min(int a,int b)
{
	int min = a < b ? a : b;
	cout << "Min<" << a << "," << b << "> is " << min << endl;
}

void Math::Min(float a, float b)
{
	float min = a < b ? a : b;
	cout << "Min<" << a << "," << b << "> is " << min << endl;
}

void Math::Min(double a, double b)
{
	double min = a < b ? a : b;
	cout << "Min<" << a << "," << b << "> is " << min << endl;
}

void Math::Min(char a, char b)
{
	char min = a < b ? a : b;
	cout << "Min<" << a << "," << b << "> is " << min << endl;
}

void Math::Min(string a, string b)
{
	string min = a < b ? a : b;
	cout << "Min<" << a << "," << b << "> is " << min << endl;
}