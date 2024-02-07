#include "../inc/ScalarConverter.hpp"

int	main(int argc, char **argv)
{	
/* 	(void) argc;
	(void) argv;

	float a = __FLT_MAX__;

	std::cout << a << std::endl;
	std::cout << static_cast<int>(a) << std::endl; */
 	if (argc != 2)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	return (0);
}