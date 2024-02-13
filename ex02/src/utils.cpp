#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"
#include "../inc/utils.hpp"
#include <cstdlib>
#include <iostream>

Base *generate(void)
{
	srand(time(NULL));
	int rng = (int)(rand() % 3);
	std::cout << rng << std::endl;

	if (rng == 0)
		return new A;
	else if (rng == 1)
		return new B;
	else
		return new C;
}

void identify(Base* p)
{	
	A *a_ptr;
	a_ptr = dynamic_cast<A*>(p);
	if (a_ptr != NULL)
	{
		std::cout << "pointer is type of A" << std::endl;
		return ;
	}
	B *b_ptr;
	b_ptr = dynamic_cast<B*>(p);
	if (b_ptr != NULL)
	{
		std::cout << "pointer is type of B" << std::endl;
		return ;
	}
	C *c_ptr;
	c_ptr = dynamic_cast<C*>(p);
	if (c_ptr != NULL)
	{
		std::cout << "pointer is type of C" << std::endl;
		return ;
	}
}

void identify(Base &p)
{
	try
	{
		(void) dynamic_cast<A&>(p);
		std::cout << "Reference is type of A" << std::endl;
	}
	catch (const std::bad_cast &)
	{
		try
		{
			(void) dynamic_cast<B&>(p);
			std::cout << "Reference is type of B" << std::endl;
		}
		catch(const std::bad_cast&)
		{
			try
			{
				(void) dynamic_cast<C&>(p);
				std::cout << "Reference is type of C" << std::endl;
			}
			catch(const std::bad_cast&)
			{
				std::cout << "Reference is of unknown type" << std::endl;
			}
			
		}
		
	}
}