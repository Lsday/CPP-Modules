/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:13:48 by oronda            #+#    #+#             */
/*   Updated: 2022/02/07 10:12:35 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Array.hpp"
#include "math.h"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}





// #include <iostream>
// #include "Array.hpp"
// #include <string>


// int main(void)
// {
// 	Array<int> int_array;

// 	Array<int> int_array2(5);
// 	int_array = int_array2;
// 	for (size_t i = 0; i < int_array.size(); i++)
// 	{
// 		int_array[i] = i;
// 		std::cout << int_array[i] << " ";
// 	}
// 	std::cout << std::endl;
// 	for (size_t i = 0; i < int_array2.size(); i++)
// 	{
// 		std::cout << int_array2[i] << " ";
// 	}
// 	std::cout << std::endl;

// 	Array<float> float_array(25);
// 	for (size_t i = 0; i < float_array.size(); i++)
// 	{
// 		std::cout << float_array[i] << "f ";
// 	}
// 	std::cout << std::endl;

// 	Array<std::string> string_array(5);
// 	string_array[0] = "hello ";
// 	string_array[1] = "ici ";
// 	string_array[2] = "c'est ";
// 	string_array[3] = "bello ";
// 	string_array[4] = "bito";
// 	for (size_t i = 0; i < string_array.size(); i++)
// 	{
// 		std::cout << string_array[i];
// 	}
// 	std::cout << std::endl;

// 	Array<std::string> string_array2 = string_array;
// 	for (size_t i = 0; i < 5; i++)
// 		string_array2[i] = "42";
// 	for (size_t i = 0; i < string_array.size(); i++)
// 		std::cout << string_array[i] << "<> " << string_array2[i] << std::endl;

// 	std::cout << "---" << std::endl;

// 	try
// 	{
// 		int_array2[-1] = 2;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}

// 	try
// 	{
// 		int_array2[999] = 2;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}

// 	return (0);
// }
