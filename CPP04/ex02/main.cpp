/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 19:34:14 by oronda            #+#    #+#             */
/*   Updated: 2021/12/19 22:01:15 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


#define ANIMALS_NB 6

int main()
{
	
	//const Animal* animal = new Animal(); DOESNT COMPILE BECAUSE ANIMAL IS ABSTRACT
	const AAnimal* cat = new Cat();
	const AAnimal* dog = new Dog();
	
	std::cout << cat << std::endl;
	std::cout << dog << std::endl;
	
	// animal->makeSound(); DOESNT COMPILE BECAUSE ANIMAL IS ABSTRACT
	cat->makeSound(); //will output the cat sound!
	dog->makeSound();
	
	//delete animal;
	delete cat;
	delete dog;


	AAnimal* animals[ANIMALS_NB];
	for (size_t i = 0; i < ANIMALS_NB; i++)
	{
		if ( i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (size_t i = 0; i < ANIMALS_NB; i++)
	{
		animals[i]->makeSound();
	}

	for (size_t i = 0; i < ANIMALS_NB; i++)
	{
		delete animals[i];
	}
	

// Cat basic;
// basic.GetBrain()->GetIdeas()[0] = "pouet";
// std::cout << "Brain Adress : " << basic.GetBrain() << std::endl;
// std::cout << basic.GetBrain()->GetIdeas()[0] << std::endl;
// std::cout << std::endl;
// {
	
// 	Cat tmp = basic;
// 	std::cout << "Brain Adress : " << tmp.GetBrain() << std::endl;
// 	std::cout << tmp.GetBrain()->GetIdeas()[0] << std::endl;
	
// 	tmp.GetBrain()->GetIdeas()[0] = "POUIC";
	
// 	std::cout << basic.GetBrain()->GetIdeas()[0] << std::endl;
// 	std::cout << tmp.GetBrain()->GetIdeas()[0] << std::endl;
// }
// std::cout << std::endl;
// std::cout << "Brain Adress : " << basic.GetBrain() << std::endl;
// std::cout << basic.GetBrain()->GetIdeas()[0] << std::endl;

		
	
}
