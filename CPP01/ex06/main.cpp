/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:35:25 by oronda            #+#    #+#             */
/*   Updated: 2021/12/15 14:53:28 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>
int main(int argc, char const *argv[])
{
	if (argc != 2)
		return 0;
		
	Karen karen;
	karen.complain(argv[1]);

	return 0;
}
