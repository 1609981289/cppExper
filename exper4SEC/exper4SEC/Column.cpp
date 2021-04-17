#include "Column.h"

Column::Column(double r, double h):Cirle(r)
{
    this->r = r;
    this->h = h;
}

void Column::setH(double h)
{
    this->h = h;
}

double Column::getH()
{
    return h;
}

double Column::area()
{
    return M_PI*r*r * 2+2*M_PI*r*h;
}

double Column::bulk()
{
    return M_PI*r*r*h;
}
