#include "../inc/ScalarConverter.hpp"
#include <sstream>
#include <cstdlib>
#include <string>
#include <limits>
#include <iomanip>

static int stoi( std::string & s ) 
{
    int i;
    std::istringstream(s) >> i;
    return i;
}

void convert_char(std::string s)
{	
	char 	c;

	c = s.at(0);
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void convert_int(std::string s)
{
	int i;

	i = stoi(s);
	if (i < -std::numeric_limits<int>::max() || i > std::numeric_limits<int>::max())
	{
		print_overflow();
		return ;
	}

	if (i < -std::numeric_limits<char>::max() || i > std::numeric_limits<char>::max())
		std::cout << "char: impossible"<< std::endl;
	else if (i >= -127 && i <= 31)
		std::cout << "char: Non displayable"<< std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;

	std::cout << "int: " << i << std::endl;

	std::cout << "float: " << static_cast<float>(i);
	
	if (check_int_dot(i))
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;

	std::cout << "double: " << static_cast<double>(i);

	if (check_int_dot(i))
		std::cout << ".0" << std::endl;
	else
		std::cout << std::endl;
}

void convert_float(std::string s)
{
	
	float f = atof(s.c_str());
	if (f < -std::numeric_limits<float>::max() || f > std::numeric_limits<float>::max())
	{
		print_overflow();
		return ;
	}

	int i = static_cast<int>(f);

	if (i < -std::numeric_limits<char>::max() || i > std::numeric_limits<char>::max())
		std::cout << "char: impossible"<< std::endl;
	else if (i >= -127 && i <= 31)
		std::cout << "char: Non displayable"<< std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;

	if (i < -std::numeric_limits<int>::max() || i > std::numeric_limits<int>::max())
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;

	std::cout << "float: " << f;
	if (check_float_dot(f))
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;

	std::cout << "double: " << static_cast<double>(f);
	if (check_float_dot(f))
		std::cout << ".0" << std::endl;
	else
		std::cout << std::endl;

}

void convert_double(std::string s)
{
	double d;

	d = atof(s.c_str());
	if (d < -std::numeric_limits<double>::max() || d > std::numeric_limits<double>::max())
	{
		print_overflow();
		return ;
	}

	int i = static_cast<int>(d);

	if (i < -std::numeric_limits<char>::max() || i > std::numeric_limits<char>::max())
		std::cout << "char: impossible"<< std::endl;
	else if (i >= -127 && i <= 31)
		std::cout << "char: Non displayable"<< std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;

	if (i < -std::numeric_limits<int>::max() || i > std::numeric_limits<int>::max())
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;

	std::cout << "float: " << static_cast<float>(d);
	
	if (check_double_dot(d))
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;
	
	std::cout << "double: " << d;

	if (check_double_dot(d))
		std::cout << ".0" << std::endl;
	else
		std::cout << std::endl;

}

void convert_literal(std::string s)
{	
	float f = atof(s.c_str());

	std::cout << "char: impossible"<< std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}


void	print_overflow(void)
{	
	std::cout << "Overflow!" << std::endl;
	std::cout << "char: impossible"  << std::endl;
	std::cout << "int: impossible"  << std::endl;
	std::cout << "float: impossible"  << std::endl;
	std::cout << "double: impossible" << std::endl;
}