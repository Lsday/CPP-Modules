#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(Ice const & src);

		Ice & operator=(Ice const & src);

		virtual AMateria* clone() const;
		void use(ICharacter& target);
		

	private:
		std::string _type;
	
};

#endif


