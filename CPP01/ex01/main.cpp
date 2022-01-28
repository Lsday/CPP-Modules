/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:59:53 by oronda            #+#    #+#             */
/*   Updated: 2021/12/11 20:29:31 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int nbOfZombie = 5;
	Zombie* horde = zombieHorde(nbOfZombie,"Roger");
	for (size_t i = 0; i < nbOfZombie; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
	return 0;
}
