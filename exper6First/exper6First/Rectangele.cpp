#include "Rectangele.h"
#define _USE_MATH_DEFINES
#include <math.h>

Rectangele::Rectangele(double w, double h)
{
    this->w = w;
    this->h = h;
}

void Rectangele::setW(double w)
{
    this->w = w;
}

void Rectangele::setH(double h)
{
    this->h = h;
}

double Rectangele::getW()
{
    return this->w;
}

double Rectangele::getH()
{
    return this->h;
}

double Rectangele::area()
{
    return w * h;
}
