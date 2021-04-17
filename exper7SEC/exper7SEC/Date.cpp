#include "Date.h"
#include <math.h>

int month_day[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

Date::Date() :year(2020), month(1), day(1) {}

Date::Date(int year, int month, int day) :year(year), month(month), day(day) {}

void Date::setYear(int year)
{
	this->year = year;
}

void Date::setMonth(int month)
{
	this->month = month;
}

void Date::setDay(int day)
{
	this->day = day;
}

int Date::getYear()
{
	return this->year;
}

int Date::getMonth()
{
	return this->month;
}

int Date::getDay()
{
	return this->day;
}

bool Date::isLeap(int year)
{
	if (year%4==0&&year%100!=0||year%400==0)
	{
		return true;
	}
	return false;
}

void Date::addDay(int adddend)
{
	int temp = this->day + adddend;
	judegeAdd(temp, this->month);
}

void Date::subDay(int subnum)
{
	int temp = this->day - subnum;
	judegeSub(temp, this->month);
}

void Date::judegeAdd(int temp,int month)
{
	turnMonthday(this->getYear());
	int t_month = 0;
	int t_temp = 0;
	if (temp > month_day[month-1])
	{
		this->day = temp - month_day[month-1];
		t_temp = temp - month_day[month - 1];
		t_month = this->month + 1;
		if (t_month > 12)
		{
			this->month = t_month - 12;
			this->year += t_month % 12;
		}
		else
		{
			this->month = t_month;
		}
	}
	else
	{
		this->day = temp;
	}
	if (t_temp > 1)
	{
		judegeAdd(t_temp, this->month);
	}
}

void Date::judegeSub(int temp, int month)
{
	turnMonthday(this->getYear());
	int t_month = 0;
	int t_temp = 0;
	if (temp<0)
	{
		this->day = month_day[month-1] + temp;
		t_month = this->month - 1;
		t_temp = abs(temp) % month_day[month - 1];
		if (t_month<0)
		{
			this->month = t_month + 12;
			this->year -= abs(t_month) % 12 + 1;
		}
		else
		{
			this->month = t_month;
		}
	}
	else
	{
		this->day = temp;
	}
	if (t_temp>1)
	{
		judegeSub(t_temp, this->month);
	}
}

Date Date::operator+(int addend)
{
	this->addDay(addend);
	return *this;
}

Date Date::operator-(int subnum)
{
	this->subDay(subnum);
	return *this;
}

int Date::operator-(Date& d)
{
	Date low;
	Date large;
	if (this->getYear()>d.getYear())
	{
		large = *this;
		low = d;
	}
	else if(this->getYear()==d.getYear())
	{
		if (this->getMonth()>d.getMonth())
		{
			large = *this;
			low = d;
		}
		else if(this->getMonth() == d.getMonth())
		{
			if (this->getDay()>d.getDay())
			{
				large = *this;
				low = d;
			}
			else if(this->getDay() == d.getDay())
			{
				return 0;
			}
			else
			{
				large = d;
				low = *this;
			}
		}
		else
		{
			large = d;
			low = *this;
		}
	}
	else
	{
		large = d;
		low = *this;
	}

	int differ = 0;
	if (large.getYear()==low.getYear())
	{
		turnMonthday(large.getYear());
		int i = 0;
		for (i = low.getMonth(); i < large.getMonth()-1; i++)
		{
			differ += month_day[i];
		}
		differ += large.getDay();
		differ += month_day[low.getMonth()-1] - low.getDay();
		return differ;
	}
	if (large.getYear()-low.getYear()==1)
	{
		int i = 0;
		turnMonthday(large.getYear());
		for (i=0;i<large.getMonth()-1;i++)
		{
			differ += month_day[i];
		}
		differ += large.getDay();
		turnMonthday(low.getYear());
		for (i=low.getMonth();i<12;i++)
		{
			differ += month_day[i];
		}
		differ += month_day[low.getMonth() - 1] - low.getDay();
		return differ;
	}
	int i = 0;
	for (i=low.getYear()+1;i<large.getYear();i++)
	{
		differ += yearDay(i);
	}
	turnMonthday(large.getYear());
	for (i=0;i<large.getMonth()-1;i++)
	{
		differ += month_day[i];
	}
	differ += large.getDay();
	turnMonthday(low.getYear());
	for (i = low.getMonth();i<12;i++)
	{
		differ += month_day[i];
	}
	differ += month_day[low.getMonth() - 1] - low.getDay();
	return differ;
}

int Date::yearDay(int year)
{
	turnMonthday(year);
	int days = 0;
	int i = 0;
	for (i=0;i<12;i++)
	{
		days += month_day[i];
	}
	return days;
}

void Date::turnMonthday(int year)
{
	if (isLeap(year))
	{
		month_day[1] = 29;
	}
	else
	{
		month_day[1] = 28;
	}
}

istream& operator>>(istream& is, Date& d)
{
	int year = 2020;
	int month = 1;
	int day = 1;
	cout << "输入日期:" << endl;
	cout << "输入年份:";
	is >> year;
	cout << "输入月份:";
	is >> month;
	cout << "输入日:";
	is >> day;
	d.setYear(year);
	d.setMonth(month);
	d.setDay(day);
	return is;
}

ostream& operator<<(ostream& os, Date& d)
{
	os << d.getYear() << "-" << d.getMonth() << "-" << d.getDay() << endl;
	return os;
}