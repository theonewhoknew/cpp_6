#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include "../inc/Data.hpp"
# include <stdint.h>

class Serializer
{

private:
	Serializer();
	Serializer(Serializer &copy);
	Serializer& operator=(const Serializer &instance);

public:
	~Serializer();

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

#endif