#include <cstdlib>
#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>
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

bool is_only_one_char(std::string s)
{

	if (std::isprint(s[0]) && !s[1])
		return (true);
	return (false);
}

bool is_all_num(std::string s)
{
	int i = 0;

	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i])
	{
		if (!std::isdigit(s[i]))
			return (false);
		i++;
	}
	return (true);
}

static void printChar(std::string s)
{
	long double d = strtold(s.c_str(), NULL);
	if (d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max() || std::isnan(d))
		std ::cout << "char : impossible\n";
	else if ((is_all_num(s) && (!std::isprint(d))) || s[0] == '-')
		std ::cout << "char : Non displayable\n";
	else if (is_only_one_char(s))
		std::cout << "char : '" << static_cast<char>(s[0]) << "'" <<std::endl;
	else
		std::cout << "char : '" << static_cast<char>(d) << "'" << std::endl;
}

static void printInt(std::string s)
{
	long double d = strtold(s.c_str(), NULL);
	if ((d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max() || std::isnan(d)) && !is_only_one_char(s))
		std ::cout << "int : impossible\n";
	else
		std::cout << "int : " << static_cast<int>(d) <<  std::endl;
}


static void printFloat(std::string s) 
{

	long double d = strtold(s.c_str(), NULL);
	if (std::isnan(d))
		std::cout << "float = nanf" << std::endl;
	else if ((std::abs(d) < std::numeric_limits<float>::min() || std::abs(d) > std::numeric_limits<int>::max()) && (d == 0 && s[0] != '0'))
		std::cout << "float = impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << "float = " << static_cast<float>(d) << "f" << std::endl;
}

static void printDouble(std::string s) 
{
	long double d = strtold(s.c_str(), NULL);
	if (std::isnan(d))
		std::cout << "double = nan" << std::endl;
	else if (d == 0 && s[0] != '0')
		std::cout << "double = impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << "double = " << static_cast<double>(d) << std::endl;
}



void ScalarConverter::convert(std::string s)
{
	printChar(s);
	printInt(s);
	printFloat(s);
	printDouble(s);
}
