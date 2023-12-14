#include "../inc/ScalarConverter.hpp"
#include <sstream>
#include <cstdlib>
#include <limits>

void convert_char(std::string s)
{	
	char 	c;

	c = s[0];
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << (int) c << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << (float) c << "f" << std::endl;
	std::cout << "double: " << (double) c << std::endl;
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
		std::cout << "char: '" << (char) i << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << (float) i << "f" << std::endl;
	std::cout << "double: " << (double) i << std::endl;
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
		std::cout << "char: '" << (char) f << "'" << std::endl;
	std::cout << "int: " << (int) f << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(c) << f << "f" << std::endl;
	std::cout << "double: " << (double) f << std::endl;
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
	d = std::strtod(s.c_str(), NULL);
	if ((int) d > 127 || (int) d < -128)
		std::cout << "char: impossible"<< std::endl;
	else if ((int) d >= 0 && (int) d <= 31)
		std::cout << "char: Non displayable"<< std::endl;
	else
		std::cout << "char: '" << (char) d << "'" << std::endl;
	std::cout << "int: " << (int) d << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(c) << (float) d << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void	print_overflow(void)
{	
	std::cout << "Overflow!" << std::endl;
	std::cout << "char: impossible"  << std::endl;
	std::cout << "int: impossible"  << std::endl;
	std::cout << "float: impossible"  << std::endl;
	std::cout << "double: impossible" << std::endl;
}