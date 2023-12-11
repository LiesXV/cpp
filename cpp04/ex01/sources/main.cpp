/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:29:57 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:45:28 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	Animal *animals[10];

	for (int i = 0; i < 10; i += 2)
	{
		animals[i] = new Cat();
		animals[i + 1] = new Dog();
	}
	
	for (int i = 0; i < 10; i++)
	{
		std::cout << "[" << i + 1 << "]	";
		animals[i]->makeSound(); 
		std::cout << std::endl;
	}

	for (int i = 0; i < 5; i++)
	{
		animals[3]->getBrain()->setIdea(i, "play");
	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << "[ANIMAL 3] " << animals[3]->getBrain()->getIdea(i) << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	
	Animal *doggo(animals[3]);

	for (int i = 0; i < 5; i++)
	{
		std::cout << "[DOGGO] " << doggo->getBrain()->getIdea(i) << std::endl;
	}

	std::cout << std::endl;
	
	for (int i = 0; i < 5; i++)
	{
		animals[2]->getBrain()->setIdea(i, "sleep");
	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << "[ANIMAL 2] " << animals[2]->getBrain()->getIdea(i) << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	
	Animal *kitty = animals[2];

	for (int i = 0; i < 5; i++)
	{
		std::cout << "[KITTY] " << kitty->getBrain()->getIdea(i) << std::endl;
	}

	animals[3] = kitty;
	animals[2] = doggo;

	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "[" << i + 1 << "]	";
		animals[i]->makeSound(); 
		std::cout << std::endl;
	}
	
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
}
