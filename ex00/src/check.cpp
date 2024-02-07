#include "../inc/ScalarConverter.hpp"

bool check_char(std::string s)
{
	if (s.length() == 1 && isprint(s[0]) && !isdigit(s[0]))
	{
		std::cout << "char literal found!" << std::endl;
		return (true);
	}
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
	std::cout << "int literal found!" << std::endl;
	return (true);
}

bool check_e(std::string s, int *i)
{
	if (s[*i] == 'e')
	{
		(*i)++;
		if (s[*i] != '+')
			return (false);
		else
		{
			(*i)++;
			for (int j = 0; j < 2; j++)
			{
				if (!isdigit(s[(*i)++]))
					return (false);
			}
		}
	}
	return (true);
}

bool check_float(std::string s)
{
	int	i = 0;

	if (s[i] == '+' || s[i] == '-')
		i++;
	if (!isdigit(s[i]))
		return (false);
	i++;
	while (isdigit(s[i]))
		i++;
	if (!check_e(s, &i))
	{
		if (s[i] != '.')
			return (false);
		i++;
		if (!isdigit(s[i]))
			return (false);
		while (isdigit(s[i]))
			i++;
		if (!isdigit(s[i]))
			return (false);
	}
	if (s[i] != 'f')
		return (false);
	std::cout << "float literal found!" << std::endl;
	return (true);	
}

bool check_double(std::string s)
{
	int	i = 0;

	if (s[i] == '+' || s[i] == '-')
		i++;
	if (!isdigit(s[i]))
		return (false);
	i++;
	while (isdigit(s[i]))
		i++;
	if (!check_e(s, &i))
	{
		if (s[i] != '.')
			return (false);
		i++;
		if (!isdigit(s[i]))
			return (false);
		while (isdigit(s[i]))
			i++;
		if (!isdigit(s[i]))
			return (false);
	}
	std::cout << "double literal found!" << std::endl;
	return (true);	
}

bool check_literal(std::string s)
{
	if (!s.compare("-inff") || !s.compare("+inff") || !s.compare("nanf")
		|| !s.compare("-inf") || !s.compare("+inf") || !s.compare("nan"))
		return (true);
	return (false);
}