#include <iostream>
#include <string>
#include <vector>

using namespace std;

int vectorTest()
{
	vector<int> vectorInt(10);
	int i = 0;
	cout << "vector size = " << vectorInt.size();
	for (i = 0; i < vectorInt.size(); i++)
	{
		vectorInt[i] = i;
	}
	for (i = 0; i < vectorInt.size(); i++)
	{
		cout << vectorInt[i]<<endl;
	}
	return 0;
}

int vectorSTLTest()
{
	vector<string>  vecString;
	string word;

	int i = 0;

	for (i = 0;i < 10;i++)
	{
		cin >> word;
		vecString.push_back(word);
	}


	for (vector<string>::iterator it = vecString.begin(); it != vecString.end();it++)
	{
		cout << *it << endl;
	}

	return 0;
}






