#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP_HPP

class Serializer
{
public:
	Serializer();
	Serializer(Serializer &copy);
	Serializer& operator=(const Serializer &instance);
	static void convert(std::string s);

protected:
	~Serializer();

};

#endif