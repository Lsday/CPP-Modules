/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:38:36 by oronda            #+#    #+#             */
/*   Updated: 2021/12/18 15:43:28 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include "iostream"

int main(int argc, char const *argv[])
{
	ClapTrap crakito("crakito");
	std::cout << crakito << std::endl;
	crakito.attack("oRonda");
	crakito.takeDamage(5);
	std::cout << crakito << std::endl;
	crakito.beRepaired(4);
	std::cout << crakito << std::endl;
	
	std::cout << std::endl;
	
	ScavTrap crakette("crakette");
	std::cout << crakette<< std::endl;
	crakette.attack("oRonda");
	crakette.takeDamage(5);
	std::cout << crakette<< std::endl;
	crakette.beRepaired(4);
	std::cout << crakette<< std::endl;
	crakette.guardGate();

	std::cout << std::endl;
	
	FragTrap crakinette("crakinette");
	std::cout << crakinette<< std::endl;
	crakinette.attack("oRonda");
	crakinette.takeDamage(5);
	std::cout << crakinette<< std::endl;
	crakinette.beRepaired(4);
	std::cout << crakinette<< std::endl;
	crakinette.highFivesGuys();

	std::cout << std::endl;
	
	DiamondTrap diams("diams");
	std::cout << diams<< std::endl;
	diams.attack("oRonda");
	diams.takeDamage(5);
	std::cout << diams<< std::endl;
	diams.beRepaired(4);
	std::cout << diams<< std::endl;
	diams.whoAmI();
	diams.guardGate();
	diams.highFivesGuys();
	return 0;
}
