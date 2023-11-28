/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:29:57 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/28 11:58:33 by ibenhaim         ###   ########.fr       */
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
	
	cout << endl;
	
	cout << j->getType() << " " << endl;
	j->makeSound();
	
	delete (j);
	
	cout << endl << i->getType() << " " << endl;
	i->makeSound();

	delete (i);

	cout << endl << c->getType() << " (constructed with WrongAnimal)" << endl;
	c->makeSound();
	
	cout << endl << cat.getType() << " (constructed alone)" << endl;
	cat.makeSound();
	
	cout << endl;
	
	meta->makeSound();
	delete (meta);

	cout << endl;
	
	delete (c);

	return 0;
}
