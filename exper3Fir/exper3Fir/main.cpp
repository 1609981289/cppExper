#include <iostream>
#include "Bulk.h"

int main()
{
	double l1, l2, l3, w1, w2, w3, h1, h2, h3;
	std::cin >> l1 >> w1 >> h1;
	std::cin >> l2 >> w2 >> h2;
	std::cin >> l3 >> w3 >> h3;
	Bulk b[3] = {
		Bulk(l1,w1,h1),
		Bulk(l2,w2,h2),
		Bulk(l3,w3,h3)
	};
	//Êä³öÃæ»ý
	int i = 0;
	for (i = 0; i < sizeof(b) / sizeof(Bulk); i++)
	{
		b[i].area();
	}
	/*	1 2 3
		4 5 6
		7 8 9
		6
		120
		504*/
	std::cin.get();
	return 0;
}