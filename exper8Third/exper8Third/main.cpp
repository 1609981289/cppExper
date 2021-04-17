#include <iostream>
#include <vector>
#include<conio.h>
#include<algorithm>

using namespace std;

int compare(const void* a, const void* b)
{
	int a_temp = *(const int*)a;
	int b_temp = *(const int*)b;
	if (a_temp > b_temp)
	{
		return 1;
	}
	if (a_temp<b_temp)
	{
		return -1;
	}
	return 0;
}

int main()
{
	vector<int> v;
	int input;
	while (true)
	{
		/*if (_kbhit())
		{
			input = _getch();
			if (input=='0')
			{
				break;
			}
			v.push_back(input);
			cout << input << endl;
		}*/
		cin >> input;
		if (input == 0)
		{
			break;
		}
		v.push_back(input);
	}

	cout << endl;

	int i = 0;
	int j = 0;
	for (i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}

	qsort(&v, v.size(), sizeof(int), compare);

	cout << endl;

	for (i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}

	cin.get();
	return 0;
}