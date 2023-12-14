#include "../inc/Serializer.hpp"
#include "../inc/Data.hpp"
#include <iostream>

int main()
{
	Data *a = new Data;

	a->number = 5;
	a->str = NULL;

	std::cout << a << std::endl;
	uintptr_t raw = Serializer::serialize(a);
	a = Serializer::deserialize(raw);
	std::cout << a << std::endl;

}