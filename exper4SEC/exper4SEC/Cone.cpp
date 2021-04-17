#include "Cone.h"
#define _USE_MATH_DEFINES
#include <math.h>

Cone::Cone(double r,double h):Cirle(r)
{
    this->r = r;
    this->h = h;
}

void Cone::setH(double h)
{
    this->h = h;
}

double Cone::getH()
{
    return h;
}
double Cone::area()
{
    return M_PI*r*r+2*M_PI*sqrt(r*r+h*h);
}

double Cone::bulk()
{
    return M_PI*r*r*h/3;
}
