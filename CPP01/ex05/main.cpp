/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:35:25 by oronda            #+#    #+#             */
/*   Updated: 2021/12/13 15:36:10 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
int main(int argc, char const *argv[])
{
	Karen karen;

	karen.complain("pouic");
	karen.complain("debug");
	karen.complain("info");
	karen.complain("warning");
	karen.complain("error");
	
	
	return 0;
}
