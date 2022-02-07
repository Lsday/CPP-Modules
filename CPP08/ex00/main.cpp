/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:45:56 by oronda            #+#    #+#             */
/*   Updated: 2022/02/08 00:02:24 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <vector>
#include <list>
#include "EasyFind.hpp"
#include "iostream"



int main()
{
	int nums[5] = {4,1,2,5,3};
	std::vector<int> vec_nums;

	vec_nums.assign(nums,nums + 5);
	
	std::cout << "Searching for '2' in the dynamic array (vector)" <<  std::endl;
	std::vector<int>::iterator vec_it = easyfind<std::vector<int> >(vec_nums,2);
	std::cout << "Found ! iterator pointing to : " << *vec_it << std::endl;
	std::cout << "element adress : " << vec_it.base() << std::endl;

	try
	{

		std::cout << "Searching for '99' in the dynamic array (vector)" <<  std::endl;
		easyfind<std::vector<int> >(vec_nums,99);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout <<"-----------" << std::endl;

	std::list<int> lst;
	lst.assign(nums,nums + 5);
	
	std::cout << "Searching for '3' in the list" <<  std::endl;
	std::list<int>::iterator lst_it = easyfind<std::list<int> >(lst,3);
	std::cout << "Found ! iterator pointing to : " << *lst_it << std::endl;
	std::cout << "Node adress : " << lst_it._M_node << std::endl;

	try
	{
		std::cout << "Searching for '3' in the list" <<  std::endl;
		easyfind<std::list<int> >(lst,99);
		
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
