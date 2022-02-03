/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:33:57 by oronda            #+#    #+#             */
/*   Updated: 2022/02/03 13:18:16 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

void	ToChar(double value)
{
	std::cout << "char: ";

	int	c = static_cast<int>(value);

	if (c < 0 || c > 127)
		std::cout << "impossible";
	else if (!std::isprint(c))
		std::cout << "Non displayable";
	else
		std::cout << "'" << (char) c << "'";
	std::cout << std::endl;
}

void	ToInt(double value)
{
	std::cout << "int: ";

	if (std::isinf(value) || std::isnan(value))
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(value);
	std::cout << std::endl;
}

void	ToFloat(double value)
{
	std::cout << "float: ";
	std::cout << static_cast<float>(value);
	if (static_cast<int>(value) == value)
		std::cout << ".0f";
	else
		std::cout << "f";
	std::cout << std::endl;
}

void	ToDouble(double value)
{
	std::cout << "double: ";
	std::cout << value;
	if (static_cast<int>(value) == value)
		std::cout << ".0";
	std::cout << std::endl;
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}
	double value = std::strtod(av[1], NULL); 
	ToChar(value);
	ToInt(value);
	ToFloat(value);
	ToDouble(value);
	return (0);
}