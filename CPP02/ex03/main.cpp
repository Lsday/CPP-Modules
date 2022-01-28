/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:47:45 by oronda            #+#    #+#             */
/*   Updated: 2021/12/17 10:19:19 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const p);
Fixed area(Point const a, Point const b, Point const c);

int main(int argc, char const *argv[])
{	
	Point a(7,7);
	Point b(11,1);
	Point c(2,2);
	Point p(9.6f,3.0f);

	if (bsp(a,b,c,p))
		std::cout << "is in triangle " << std::endl;
	else
		std::cout << "is not in triangle " << std::endl;
	
	return 0;


}
