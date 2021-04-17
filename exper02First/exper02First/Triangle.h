#pragma once
class Triangle
{
public:
	Triangle(double a = 1, double b = 1, double c = 1);
	double perimeter();
	double area();
	void showMessage();
private:
	double a, b, c;
};