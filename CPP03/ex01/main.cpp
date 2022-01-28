/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:38:36 by oronda            #+#    #+#             */
/*   Updated: 2021/12/17 23:49:54 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "iostream"

int main(int argc, char const *argv[])
{
	ClapTrap crakito("crakito");
	crakito.attack("oRonda");

	std::cout << crakito.getName() << " has " << crakito.getHP() << "HP" << std::endl;
	crakito.takeDamage(5);
	std::cout << crakito.getName() << " has " << crakito.getHP() << "HP" << std::endl;

	crakito.beRepaired(4);
	std::cout << crakito.getName() << " has " << crakito.getHP() << "HP" << std::endl;

	std::cout << std::endl;
	
	ScavTrap crakette("crakette");
	crakette.attack("oRonda");

	std::cout << crakette.getName() << " has " << crakette.getHP() << "HP" << std::endl;
	crakette.takeDamage(5);
	std::cout << crakette.getName() << " has " << crakette.getHP() << "HP" << std::endl;

	crakette.beRepaired(4);
	std::cout << crakette.getName() << " has " << crakette.getHP() << "HP" << std::endl;

	crakette.guardGate();
	

	return 0;
}
