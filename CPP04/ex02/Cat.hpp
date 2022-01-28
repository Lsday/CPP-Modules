#ifndef CAT_HPP
# define CAT_HPP


#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal 
{
	public :
		Cat();
		Cat(Cat const & src);
		virtual ~Cat();

		Cat & operator=(Cat const & src);

		virtual void makeSound() const;
		Brain * GetBrain() const;

	 private :
	 	Brain* brain;
};

#endif