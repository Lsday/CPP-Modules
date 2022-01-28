
#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
	private:
		AMateria* inventory[4];
		std::string _name;

	public:
		Character();
		Character(std::string name);
		Character(Character const & src);
		~Character();

		Character & operator=(Character const & src);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};


