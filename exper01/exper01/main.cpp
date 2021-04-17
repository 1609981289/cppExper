#include <iostream>

using namespace std;

class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	Time(){}
	Time(int hour,int minute,int sec);
	void setHour(int hour);
	void setMinute(int minute);
	void setSec(int sec);
	int getHour();
	int getMinute();
	int getSec();
};

Time::Time(int hour,int minute,int sec)
{
	this->hour = hour;
	this->minute = minute;
	this->sec = sec;
}

void Time::setHour(int hour)
{
	this->hour = hour;
}

void Time::setMinute(int minute)
{
	this->minute = minute;
}

void Time::setSec(int sec)
{
	this->sec = sec;
}

int Time::getHour()
{
	return this->hour;
}

int Time::getMinute()
{
	return this->minute;
}

int Time::getSec()
{
	return this->sec;
}

int main()
{
	/*Time t1;*/
	int h, m, s;
	/*cin >> h;
	t1.setHour(h);
	cin >> m;
	t1.setMinute(m);
	cin >> s;
	t1.setSec(s);*/
	cout << "输入时:";
	cin >> h;
	cout << "输入分";
	cin >> m;
	cout << "输入秒";
	cin >> s;
	Time t1(h,m,s);
	cout << t1.getHour() << "-" << t1.getMinute() << "-" << t1.getSec() << endl;
	return 0;
}
/**
* 要让其他类使用，并且不用考虑数据安全，可以选择设置为公有的，
* 他类不可见的，不需要用户看见的，不让用户修改的数据设为私有的。可以向外界提供方法
* 函数体中的内容不是很多，而且需要多次使用的，在类中定义。友元函数，运算符重载
* 函数体中内容很多。不适合使用内联函数的在类外定义，一般多数都是在类外定义的。
*/