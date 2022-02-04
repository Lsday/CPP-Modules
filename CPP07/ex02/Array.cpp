#include "Array.hpp"

Array::Array()
{
	std::cout << "Array Default Constructor" << std::endl;

}

Array::Array(Array const &src)
{
	std::cout << "Array Copy Constructor" << std::endl;
}

template<typename T>
Array::Array(unsigned int n) : _count(n)
{
	T[_count] = new T[_count];
}

Array::~Array()
{
	std::cout << "Array Destructor" << std::endl;
}

Array& Array::operator=(Array const &src)
{
	std::cout << "Array assignement operator" << std::endl;
}

std::ostream &operator<<(std::ostream &os, Array const &src)
{
}