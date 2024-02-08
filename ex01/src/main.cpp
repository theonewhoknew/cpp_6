#include "../inc/Serializer.hpp"
#include "../inc/Data.hpp"
#include <iostream>

int main()
{
	Data *a = new Data();

	a->number = 5;
	a->str = "hola";

	std::cout << a->str << std::endl;

	std::cout << "pointer addr before" << std::endl;
	std::cout << a << std::endl;
	uintptr_t raw = Serializer::serialize(a);
	std::cout << "uintptr value: " << std::endl;
	std::cout << raw << std::endl;
	a = Serializer::deserialize(raw);
	std::cout << "pointer addr after" << std::endl;
	std::cout << a << std::endl;

	std::cout << a->str << std::endl;
}