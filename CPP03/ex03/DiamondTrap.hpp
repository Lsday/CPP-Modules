#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap : public FragTrap,  public ScavTrap
{

	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &src);
		~DiamondTrap();

		DiamondTrap	&operator=(const DiamondTrap & src);

		void whoAmI();
		void attack(std::string const & target);

		
	private:
		DiamondTrap();
		std::string _name;
	
};





#endif