#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal
{
	public :
		AAnimal();
		AAnimal(AAnimal const & src);
		virtual ~AAnimal();

		AAnimal & operator=(AAnimal const & src);
		virtual void makeSound() const = 0;
		const std::string & getType(void) const;

	protected :
		std::string type;

};

std::ostream & operator<<(std::ostream & o, AAnimal & a);


#endif