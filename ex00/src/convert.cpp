#include "../inc/ScalarConverter.hpp"
#include <sstream>
#include <cstdlib>
#include <string>
#include <limits>
#include <iomanip>

void convert_char(std::string s)
{	
	char 	c;

	c = s.at(0);
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

static int stoi( std::string & s ) 
{
    int i;
    std::istringstream(s) >> i;
    return i;
}

void convert_int(std::string s)
{	
	long long ll;
	int i;

	ll = strtoll(s.c_str(), NULL, 0);
	if (ll < std::numeric_limits<int>::min() || ll > std::numeric_limits<int>::max())
	{
		print_overflow();
		return ;
	}
	i = stoi(s);
	if (i < std::numeric_limits<char>::min() || i > std::numeric_limits<char>::max())
		std::cout << "char: impossible"<< std::endl;
	else if (i >= 0 && i <= 31)
		std::cout << "char: Non displayable"<< std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void convert_float(std::string s)
{	
	long double ld;
	float f;
	int	i = 0;
	int c = 0;

	while (s[i] != '.')
		i++;
	i++;
	while (s[i] != 'f')
	{
		i++;
		c++;
	}
	ld = std::strtold(s.c_str(), NULL);
	if (ld < std::numeric_limits<float>::min() || ld > std::numeric_limits<float>::max())
	{
		print_overflow();
		return ;
	}
	f = std::strtof(s.c_str(), NULL);
	if ((int) f > 127 || (int) f < -128)
		std::cout << "char: impossible"<< std::endl;
	else if ((int) f >= 0 && (int) f <= 31)
		std::cout << "char: Non displayable"<< std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	long ll = static_cast<long long>(f);
	if (ll < std::numeric_limits<int>::min() || ll > std::numeric_limits<int>::max())
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void convert_double(std::string s)
{	
	long double ld;
	double d;
	int	i = 0;
	int c = 0;

	while (s[i] != '.')
		i++;
	i++;
	while (s[i])
	{
		i++;
		c++;
	}
	ld = std::strtold(s.c_str(), NULL);
	if (ld < std::numeric_limits<double>::min() || ld > std::numeric_limits<double>::max())
	{
		print_overflow();
		return ;
	}
	d = static_cast<double>(ld);
	if (static_cast<char>(d) > 127 || static_cast<char>(d) < -127)
		std::cout << "char: impossible"<< std::endl;
	else if ((int) d >= 0 && (int) d <= 31)
		std::cout << "char: Non displayable"<< std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	long ll = static_cast<long long>(d);
	if (ll < std::numeric_limits<int>::min() || ll > std::numeric_limits<int>::max())
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void convert_literal(std::string s)
{	
	float f = strtof(s.c_str(), NULL);

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