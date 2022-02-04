#pragma once

#include <iostream>

template<typename T>
class Array 
{
	private :
		unsigned int _size;
		T *_entities;


	public:
		Array() : _size(0)
		{
			_entities = new T[0];
		}

		Array(unsigned int n) : _size(n)
		{
			_entities = new T[0];
		}


		Array(Array const &src);

		template<typename T> Array(unsigned int n);
		
		virtual ~Array();
		Array& operator=(Array const &src);
		Array& operator[](Array const &src);

		unsigned int size();

};

// std::ostream &operator<<(std::ostream &os, Array const &src);

