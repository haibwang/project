#pragma once
class typechange
{
public:
	int a;
	float b;

public:
	typechange();
	typechange(int a, float b);
	//ת������
	operator int() const;
};

void testChangeFunction();