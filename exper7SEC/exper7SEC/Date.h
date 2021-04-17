#pragma once
#include <iostream>
using namespace std;

class Date
{
public:
	Date();
	Date(int year, int month, int day);
	~Date() {}
	void setYear(int year);
	void setMonth(int month);
	void setDay(int day);
	int getYear();
	int getMonth();
	int getDay();
	bool isLeap(int year);
	void addDay(int addend);
	void subDay(int subnum);
	int yearDay(int year);
	Date operator+(int addend);
	Date operator-(int subnum);
	int operator-(Date & d);
	friend istream& operator>>(istream&is,Date& d);
	friend ostream& operator<<(ostream&os,Date& d);
private:
	int year;
	int month;
	int day;
	void judegeAdd(int temp,int month);
	void judegeSub(int temp,int month);
	void turnMonthday(int year);
};

