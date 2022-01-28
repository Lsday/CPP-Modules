
#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
private:
	Weapon* _weapon;
	std::string _name;

public:
	HumanB(std::string const name);
	~HumanB();

	void attack(void);
	void setWeapon(Weapon& weapon);
	Weapon& getWeapon(void) const;
};



#endif

