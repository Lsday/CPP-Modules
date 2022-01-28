
#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>

class Zombie
{
	private:
		std::string _name;
		
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce(void);
		void SetName(std::string str);
		std::string GetName(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif
	

