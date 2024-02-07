#include <sstream>
#include <string>
#include <iostream>

bool check_int_dot(int i)
{
	double f = static_cast<double>(i);
	std::stringstream ss;
    ss << f;
	std::string double_str = ss.str();
	if (double_str.find(".") != std::string::npos)
		return (false);
	if (double_str.find("e") != std::string::npos)
		return (false);
	return (true);
}

bool check_float_dot(float f)
{
	std::stringstream ss;
    ss << f;
	std::string float_str = ss.str();
	if (float_str.find(".") != std::string::npos)
		return (false);
	if (float_str.find("e") != std::string::npos)
		return (false);
	return (true);
}

bool check_double_dot(double d)
{
	std::stringstream ss;
    ss << d;
	std::string double_str = ss.str();
	if (double_str.find(".") != std::string::npos)
		return (false);
	if (double_str.find("e") != std::string::npos)
		return (false);
	return (true);
}