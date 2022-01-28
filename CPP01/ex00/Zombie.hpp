
#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie
{
	private:
		std::string _name;
		void announce(void);

	public:
		Zombie();
		Zombie(std::string pname);
		~Zombie();
		void SetName(std::string str);
		std::string GetName();
		
		
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );


#endif
	

