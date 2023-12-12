#include "../inc/ScalarConverter.hpp"

bool check_char(std::string s)
{
	if (s.length() == 1 && isprint(s[0]) && isalpha(s[0]))
		return (true);
	return (false);	
}

bool check_int(std::string s)
{
	int	i = 0;

	if (s[i] == '+' || s[i] == '-')
		i++;
	while (s[i])
	{
		if (!isdigit(s[i]))
			return (false);
		i++;
	}
	return (true);
}