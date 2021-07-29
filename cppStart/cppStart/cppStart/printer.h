#pragma once
#include <iostream>

using namespace std;

class printer
{
private:
	int clolor;


public:
	int printColor(void)
	{
		cout << "helo world" << endl;
		cout << "color=" << clolor << endl;

		return 0;
	}

	int setColor(int color)
	{
		clolor = color;

		return 0;
	}

	int putChar(char ch)
	{
		cout << ch << endl;

		return 0;
	};




};
