#pragma once
class Cube
{
public:
	Cube(){}
	Cube(float length, float width, float height);
	void setLength(float length);
	void setWidth(float width);
	void setHeight(float height);
	float getLength();
	float getWidth();
	float getHeight();
	float getV();
	void printV();
	
private:
	float length;//³¤
	float width;//¿í
	float height;//¸ß
};

