#include "../inc/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(ScalarConverter &copy)
{	
	(void) copy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &instance)
{	
	(void) instance;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{

}

void ScalarConverter::convert(std::string s)
{	
	if (check_char(s))
		convert_char(s);
	if (check_int(s))
		convert_int(s);
	if (check_float(s))
		convert_float(s);
	if (check_double(s))
		convert_double(s);
	if (check_literal(s))
		convert_literal(s);
	
}


