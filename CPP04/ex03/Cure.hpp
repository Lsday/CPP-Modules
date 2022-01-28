#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(Cure const & src);

		Cure & operator=(Cure const & src);

		virtual AMateria* clone() const;
		void use(ICharacter& target);
		

	private:
		std::string _type;
	
};

#endif
