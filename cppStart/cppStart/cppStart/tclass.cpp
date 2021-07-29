#include <iostream>
#include "tclass.h"

typechange::typechange()
{
	a = 10;
	b = 9.5;
}

typechange::typechange(int aa, float bb)
{
	a = aa;
	b = bb;
}

typechange::operator int() const
{
	std::cout << "type change\n";
	return int (b + 0.5);
}

void testChangeFunction()
{
	typechange achange = typechange();
	std::cout << "a=" << achange.a << std::endl;
	std::cout << "b=" << achange.b << " int b=" << int(achange) << std::endl;

	typechange bchange = typechange(7, 7.9);
	std::cout << "a=" << bchange.a << std::endl;
	std::cout << "b=" << bchange.b << " int b=" << int(bchange) << std::endl;
}