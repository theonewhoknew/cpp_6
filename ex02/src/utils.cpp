#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"
#include "../inc/utils.hpp"
#include <cstdlib>
#include <iostream>

Base *generate(void)
{	
	Base *ptr;
	srand(time(NULL));
	int rng = (int)(rand() % 3);
	std::cout << rng << std::endl;

	if (rng == 0)
		ptr = new A;
	else if (rng == 1)
		ptr = new B;
	else if (rng == 2)
		ptr = new C;
	return (ptr);
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
	if (dynamic_cast<const A*>(&p) != NULL)
	{
		std::cout << "pointer is type of A" << std::endl;
		return ;
	}
	if (dynamic_cast<const B*>(&p) != NULL)
	{
		std::cout << "pointer is type of B" << std::endl;
		return ;
	}
	if (dynamic_cast<const C*>(&p) != NULL)
	{
		std::cout << "pointer is type of C" << std::endl;
		return ;
	}
}