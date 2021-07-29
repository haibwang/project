#include<string>
#include<iostream>
using namespace std;

int strTest()
{
	string name;
	string firstName;
	string emptyStr;


	name = "hello ";
	firstName = "world";

	cout << "say hi:" << name + firstName << endl;

	cout << "empty str is :" << emptyStr<<"end";

	return 0;
}