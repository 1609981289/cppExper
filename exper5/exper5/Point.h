#pragma once
class Point
{
public:
	Point(float x,float y);
	Point() {}
	~Point() {}
	void setX(float x);
	float getX();
	void setY(float y);
	float getY();
private:
	float x;
	float y;
};

