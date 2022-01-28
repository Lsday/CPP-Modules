#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	public:
	
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap();
		ClapTrap & operator=(ClapTrap const & src);

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		const std::string &getName(void) const;
		int getHP(void) const;
		int getEP(void) const;
		int getAttackDamage(void) const;
	

	private:
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;

		ClapTrap();
};

std::ostream & operator<<(std::ostream &ostream, const ClapTrap &c);

#endif
