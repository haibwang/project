#include<iostream>
namespace ttemplate
{
	template <typename T>
	void swap(T& a, T& b)
	{
		T tmp;

		tmp = a;
		a = b;
		b = tmp;
	}


	void ttemplate_test(void)
	{
		int a = 10;
		int b = 20;
		char c = 'M';
		char d = 'N';

		std::cout << "a=" << a << " b=" << b << std::endl;
		swap(a, b);
		std::cout << "swap:a=" << a << " b=" << b << std::endl;

		std::cout << "c =" << c << " d=" << d << std::endl;
		swap(c, d);
		std::cout << "swap:c=" << c << " c=" << d << std::endl;

	}


}