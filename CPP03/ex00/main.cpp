/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:38:36 by oronda            #+#    #+#             */
/*   Updated: 2022/01/26 11:59:57 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "iostream"

int main()
{
	ClapTrap crakito("Crakito");
	crakito.attack("oRonda");

	std::cout << crakito.getName() << " has " << crakito.getHP() << "HP" << std::endl;
	crakito.takeDamage(5);
	std::cout << crakito.getName() << " has " << crakito.getHP() << "HP" << std::endl;

	crakito.beRepaired(4);
	std::cout << crakito.getName() << " has " << crakito.getHP() << "HP" << std::endl;

	return 0;
}
