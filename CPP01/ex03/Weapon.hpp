#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>


class Weapon
{
private:
	std::string _type;
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();

	const std::string& getType(void) const;
	void setType(const std::string& type);
};




#endif