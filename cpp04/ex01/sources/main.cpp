/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:29:57 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/01 19:30:04 by ibenhaim         ###   ########.fr       */
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
		cout << "[" << i + 1 << "]	";
		animals[i]->makeSound(); 
		cout << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		animals[2]->getBrain()->setIdea(i, "sniff anus");
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "[ANIMAL 2]" << animals[2]->getBrain()->getIdea(i) << endl;
	}

	cout << endl;
	cout << endl;
	
	Animal *doggo(animals[2]);

	for (int i = 0; i < 5; i++)
	{
		cout << "[DOGGO] " << doggo->getBrain()->getIdea(i) << endl;
	}

	cout << endl;
	
	for (int i = 0; i < 5; i++)
	{
		animals[3]->getBrain()->setIdea(i, "lick fingers");
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "[ANIMAL 3]" << animals[3]->getBrain()->getIdea(i) << endl;
	}

	cout << endl;
	cout << endl;
	
	Animal *kitty = animals[3];

	for (int i = 0; i < 5; i++)
	{
		cout << "[KITTY] " << kitty->getBrain()->getIdea(i) << endl;
	}

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
