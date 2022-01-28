
#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
private:
	Weapon &_weapon;
	std::string _name;

public:
	HumanA(std::string const name, Weapon &weapon);
	~HumanA(void);

	void attack(void);
	Weapon & getWeapon( void ) const;
};



#endif

