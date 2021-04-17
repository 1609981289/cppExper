#include "Triangle.h"
#define _USE_MATH_DEFINES
#include <math.h>

Triangle::Triangle(double a, double b, double c)
{
    if (a+b>c&&a+c>b&&b+c>a)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    else
    {
        delete this;
    }
}

void Triangle::setA(double a)
{
    this->a = a;
}

void Triangle::setB(double b)
{
    this->b = b;
}

void Triangle::setC(double c)
{
    this->c = c;
}

double Triangle::getA()
{
    return this->a;
}

double Triangle::getB()
{
   return this->b;
}

double Triangle::getC()
{
    return this->c;
}

double Triangle::area()
{
    if (a+b<=c||a+c<=b||b+c<=a)
    {
        return -1;
    }
    double l = (a + b + c) / 2;
    return sqrt(l*(l-a)*(l-b)*(l-c));
}
