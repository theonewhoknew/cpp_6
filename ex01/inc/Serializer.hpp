#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include "../inc/Data.hpp"
# include <stdint.h>

class Serializer
{
public:
	Serializer();
	Serializer(Serializer &copy);
	Serializer& operator=(const Serializer &instance);
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);

protected:
	~Serializer();

};

#endif