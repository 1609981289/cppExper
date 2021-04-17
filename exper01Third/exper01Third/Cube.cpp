#include "Cube.h"
#include <iostream>

Cube::Cube(float length, float width, float height)
{
	this->length = length;
	this->width = width;
	this-> height = height;
}

void Cube::setLength(float length)
{
	this->length = length;
}

void Cube::setWidth(float width)
{
	this->width = width;
}

void Cube::setHeight(float height)
{
	this->height = height;
}

float Cube::getLength()
{
	return this->length;
}

float Cube::getWidth()
{
	return this->width;
}

float Cube::getHeight()
{
	return this->height;
}

float Cube::getV()
{
	return this->length * this->width * this->height;
}

void Cube::printV()
{
	std::cout << "Ìå»ýÎª:" << this->getV() << std::endl;;
}