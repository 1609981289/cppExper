#include "Bulk.h"
#include <iostream>

Bulk::Bulk(double l, double w, double h)
{
	this->length = l;
	this->width = w;
	this->height = h;
}

void Bulk::area()
{
	std::cout << length * width * height << std::endl;
}