#include <iostream>
#include "complex.h"

int main()
{
	Complex a(1.2, -0.5);
	Complex b(12.3);
	Complex c(0.3, 1.1);
	Complex d(0.3, 1.1);

	Complex sum = a + b;
	Complex prod = a * b;

	std::cout << "a = " << a << "; b = " << b << "; c = " << c << "; a + b = " << sum << "; a * b = " << prod << std::endl;
	std::cout << "c = " << c << "; d = " << d << 
				"; c == d " << (c == d) << "; a == b " << (a == b) << 
				"; c != d " << (c != d) << "; a != b " << (a != b) << std::endl;

	c += b;
	d -= a;

	std::cout << "c += b; c = " << c << "; d -= a; d = " << d << std::endl;

	Complex z;
	std::cout << c / z;
	
	return 0;
}