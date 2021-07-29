#include<iostream>
#include "tstring.h"
#include "ttemplate.h"
#include "tclass.h"

void testtemplate()
{
	using ttemplate::ttemplate_test;
	ttemplate_test();
}



int main()
{
	testChangeFunction();

	return 0;
}