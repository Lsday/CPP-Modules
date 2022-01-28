#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	public :
		Animal();
		Animal(Animal const & src);
		virtual ~Animal();

		Animal & operator=(Animal const & src);
		virtual void makeSound() const;
		const std::string & getType(void) const;

	protected :
		std::string type;

};

std::ostream & operator<<(std::ostream & o, Animal & a);


#endif