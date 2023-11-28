/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:29:57 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/28 15:07:07 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	Animal *animals[100];

	for (int i = 0; i < 100; i += 2)
	{
		animals[i] = new Cat();
		animals[i + 1] = new Dog();
	}
	
	for (int i = 0; i < 100; i++)
	{
		cout << "[" << i + 1 << "]	";
		animals[i]->makeSound(); 
		cout << endl;
	}

	for (int i = 0; i < 100; i++)
	{
		delete animals[i];
	}
}
