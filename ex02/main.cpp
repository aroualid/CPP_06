#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <ctime>
#include <iostream>
#include <cstdlib>

int main(void)
{
	srand(time(NULL));
	Base *one = generate();
	Base *two = generate();
	Base *three = generate();
	Base *four = generate();
	Base *five = generate();
	Base *six = generate();
	Base *seven = generate();
	Base *height = generate();
	Base *nine = generate();

	std::cout << "identify * \n";
	identify(one);
	identify(two);
	identify(three);
	identify(four);
	identify(five);
	identify(six);
	identify(seven);
	identify(height);
	identify(nine );

	std::cout << std::endl;

	A un;
	B deux;
	C trois;

	std::cout << "identify & \n";
	identify(un);
	identify(deux);
	identify(trois);

	delete one;
	delete two;
	delete three;
	delete four;
	delete five;
	delete six;
	delete seven;
	delete height;
	delete nine;
}
