#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>

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

bool 	check_char(std::string s);
bool	check_int(std::string s);
bool	check_float(std::string s);
bool	check_double(std::string s);
bool	check_literal(std::string s);
void	convert_char(std::string s);
void	convert_int(std::string s);
void	convert_float(std::string s);
void	convert_double(std::string s);
void	convert_literal(std::string s);
void	print_overflow(void);

#endif