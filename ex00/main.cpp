#include "ScalarConverter.hpp"
#include <iostream>

int main (int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Wrong Number of arguments !\n";
		return (1);
	}
	ScalarConverter::convert(argv[1]);	
}
