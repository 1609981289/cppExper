#include <iostream>
#include "Role.h"

using namespace std;

int main()
{
	Role mary("Mary", 4);
	Role jack("jack", 0);
	mary.show();
	jack.show();
	return 0;
}