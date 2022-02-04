/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:56:39 by oronda            #+#    #+#             */
/*   Updated: 2022/02/03 19:10:15 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Iter.hpp"



int main(void)
{
	
	int x[] = {0,1,2,3};
	Iter(x,4,&print);
	Iter(x,4,&increment);
	Iter(x,4,&print);
	return 0;
}