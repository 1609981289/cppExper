#include "Math.h"

int main()
{
	Math  math = Math::getMath();

	math.Min(3, 5);
	math.Min(2.1f, 3.0f);
	math.Min(3.657, 5.32);
	math.Min('a','c');
	math.Min("ac", "aa");

	/*	Min<3, 5> is 3
		Min<2.1, 3> is 2.1
		Min<3.657, 5.32> is 3.657
		Min<a, c> is a
		Min<ac, aa> is aa*/

	cin.get();
	return 0;
}