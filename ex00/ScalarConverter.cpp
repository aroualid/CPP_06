
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::~ScalarConverter()
{}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
	*this = src;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const & src)
{
	(void) src;
	return (*this);
}

void ScalarConverter::convert(std::string s)
{

}
