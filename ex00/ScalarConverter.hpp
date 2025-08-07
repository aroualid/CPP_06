
#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include "string"

class ScalarConverter {

public:
	static void convert(std::string s);
private:
	ScalarConverter();
	ScalarConverter(ScalarConverter const & src);
	~ScalarConverter();
	ScalarConverter &operator=(ScalarConverter const & src);
};

#endif
