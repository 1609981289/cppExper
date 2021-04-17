#include "Circle.h"
#define _USE_MATH_DEFINES
#include <math.h>

Circle::Circle(double r)
{
    this->r = r;
}

void Circle::setR(double r)
{
    this->r = r;
}

double Circle::getR()
{
    return this->r;
}

double Circle::area()
{
    return M_PI * r * r;
}
