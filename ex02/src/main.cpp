#include "../inc/Base.hpp"
#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"
#include "../inc/utils.hpp"
#include <iostream>

int main()
{
	Base *unknown = generate();

	identify(unknown);
	identify(*unknown);
}