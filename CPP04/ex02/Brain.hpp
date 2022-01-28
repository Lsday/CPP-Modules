#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>
class Brain
{
	public : 
	Brain();
	Brain(Brain const & src);
	~Brain();

	Brain& operator=(Brain const & src);

	std::string * GetIdeas();

	private:
		std::string _ideas[100];
};



#endif