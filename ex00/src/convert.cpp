#include "../inc/ScalarConverter.hpp"
#include <sstream>

void convert_char(std::string s)
{	
	char 	c;

	c = s[0];
	std::cout << "char literal found!" << std::endl;
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
	int i;

	i = stoi(s);
	std::cout << "int literal found!" << std::endl;
	if (i > 127 || i < -128)
		std::cout << "char: impossible"<< std::endl;
	else if (i >= 0 && i <= 31)
		std::cout << "char: Non displayable"<< std::endl;
	else
		std::cout << "char: '" << (char) i << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << (float) i << "f" << std::endl;
	std::cout << "double: " << (double) i << std::endl;
}