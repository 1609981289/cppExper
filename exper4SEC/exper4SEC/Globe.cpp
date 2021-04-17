#include "Globe.h";

double Globe::area()
{
    return 4*M_PI*r*r;
}

double Globe::bulk()
{
    return (4 / 3) * M_PI * (r * r * r);
}
