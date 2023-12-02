/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:29:57 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/02 14:16:47 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	AAnimal *animals[10];

	for (int i = 0; i < 10; i += 2)
	{
		animals[i] = new Cat();
		animals[i + 1] = new Dog();
	}
	
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i + 1 << "]	";
		animals[i]->makeSound(); 
		cout << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		animals[3]->getBrain()->setIdea(i, "play");
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "[ANIMAL 3] " << animals[3]->getBrain()->getIdea(i) << endl;
	}

	cout << endl;
	cout << endl;
	
	AAnimal *doggo(animals[3]);

	for (int i = 0; i < 5; i++)
	{
		cout << "[DOGGO] " << doggo->getBrain()->getIdea(i) << endl;
	}

	cout << endl;
	
	for (int i = 0; i < 5; i++)
	{
		animals[2]->getBrain()->setIdea(i, "sleep");
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "[ANIMAL 2] " << animals[2]->getBrain()->getIdea(i) << endl;
	}

	cout << endl;
	cout << endl;
	
	AAnimal *kitty = animals[2];

	for (int i = 0; i < 5; i++)
	{
		cout << "[KITTY] " << kitty->getBrain()->getIdea(i) << endl;
	}

	animals[3] = kitty;
	animals[2] = doggo;

	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i + 1 << "]	";
		animals[i]->makeSound(); 
		cout << endl;
	}
	
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
}
