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

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* c = new WrongCat();
	WrongCat cat;
	
	std::cout << std::endl;
	
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	
	delete (j);
	
	std::cout << std::endl << i->getType() << " " << std::endl;
	i->makeSound();

	delete (i);

	std::cout << std::endl << c->getType() << " (constructed with WrongAnimal)" << std::endl;
	c->makeSound();
	
	std::cout << std::endl << cat.getType() << " (constructed alone)" << std::endl;
	cat.makeSound();
	
	std::cout << std::endl;
	
	meta->makeSound();
	delete (meta);

	std::cout << std::endl;
	
	delete (c);

	return 0;
}
