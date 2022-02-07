/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:45:44 by oronda            #+#    #+#             */
/*   Updated: 2022/02/07 20:45:45 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#pragma once

#include <iostream>
#include <exception>

template<typename T>
class Array 
{
	private :
		T 			*_entities;
		unsigned int _size;
		
	public:
		Array() : _entities(new T[0]), _size(0) {std::cout << "Array Default Constructor" << std::endl;}
		Array(unsigned int n) : _entities(new T[n]), _size(n) {std::cout << "Array Parameter Constructor" << std::endl;}
	
		Array(Array const &src)
		{
			//std::cout << "Array Copy Constructor" << std::endl;

			if (src.size() > 0)
			{
				this->_entities =  new T[src.size()];
				for (size_t i = 0; i < src._size; i++)
					this->_entities[i] = src._entities[i];
			}
			this->_size = src._size;
		}
		
		virtual ~Array(){delete [] _entities;}

		Array& operator=(Array const &src)
		{
			//std::cout << "Assignement operator" << std::endl;
			
			delete[] this->_entities;
			if (src.size() > 0)
			{
				this->_entities =  new T[src.size()];
				for (size_t i = 0; i < src._size; i++)
					this->_entities[i] = src._entities[i];
			}
			this->_size = src._size;
			
			return *this;
		}

		T& operator[](unsigned int n)
		{
			//std::cout << "Array [] operator" << std::endl;
			if (n < 0 || n > this->size() - 1)
				throw RangeException();
			
			//return *(this->_entities + (n * sizeof(T))) ;
			return _entities[n];
			//return *(_entities + n);
		}

		unsigned int size() const {return _size;}

		class RangeException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return "Exception : target is not in range";
				}
		};

};

 //std::ostream &operator<<(std::ostream &os, T const &src);

