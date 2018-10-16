#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

int main()
{

	double radius;

	std::cout << "Welcome! Set the radius for a sphere : ";
	std::cin >> radius;

	std::cout << "The volume is: " << 4.0 / 3.0*M_PI * pow(radius, 3.0) << std::endl;
	std::cout << "The area is: " << 4.0 * M_PI * pow(radius, 2.0) << std::endl;
	
	system("pause");
	return 0;
}
