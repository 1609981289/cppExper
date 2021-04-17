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
	cout << "����ʱ:";
	cin >> h;
	cout << "�����";
	cin >> m;
	cout << "������";
	cin >> s;
	Time t1(h,m,s);
	cout << t1.getHour() << "-" << t1.getMinute() << "-" << t1.getSec() << endl;
	return 0;
}
/**
* Ҫ��������ʹ�ã����Ҳ��ÿ������ݰ�ȫ������ѡ������Ϊ���еģ�
* ���಻�ɼ��ģ�����Ҫ�û������ģ������û��޸ĵ�������Ϊ˽�еġ�����������ṩ����
* �������е����ݲ��Ǻܶ࣬������Ҫ���ʹ�õģ������ж��塣��Ԫ���������������
* �����������ݺܶࡣ���ʺ�ʹ�����������������ⶨ�壬һ��������������ⶨ��ġ�
*/