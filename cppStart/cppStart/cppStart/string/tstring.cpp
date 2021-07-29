#include <iostream>
#include <string>

using namespace std;

void string_test(void)
{
	string myname;
	string myfirstname;
	string fullName;

	//cout << "what is your name:";
	//cin >> myname;

	//cout << "what is your name:";
	//cin >> myfirstname;

	//cout << "your name is:" << myfirstname+myname << endl;

	cout << "your full name:"<<endl;
	getline(cin, fullName);

	cout << "full name is:"<<fullName;

}

