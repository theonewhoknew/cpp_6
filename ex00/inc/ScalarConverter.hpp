#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <iomanip>

class ScalarConverter
{
public:
	ScalarConverter();
	ScalarConverter(ScalarConverter &copy);
	ScalarConverter& operator=(const ScalarConverter &instance);
	static void convert(std::string s);

protected:
	~ScalarConverter();

};

bool  check_char(std::string s);
bool	check_int(std::string s);
void convert_char(std::string s);
void convert_int(std::string s);

#endif