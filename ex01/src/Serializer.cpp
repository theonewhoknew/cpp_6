#include "../inc/Serializer.hpp"
#include "../inc/Data.hpp"

Serializer::Serializer()
{

}

Serializer::Serializer(Serializer &copy)
{	
	(void) copy;
}

Serializer& Serializer::operator=(const Serializer &instance)
{	
	(void) instance;
	return (*this);
}

Serializer::~Serializer()
{

}

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}