/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:16:11 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:45:28 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"

int main (void)
{

	IMateriaSource* src = new MateriaSource();

	std::cout << std::endl;
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	std::cout << std::endl;
	
	ICharacter* me = new Character("me");
	
	std::cout << std::endl;
	
	AMateria* tmp;
	
	std::cout << std::endl;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	std::cout << std::endl;
	
	ICharacter* bob = new Character("bob");
	
	std::cout << std::endl;
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	std::cout << std::endl;
	std::cout << std::endl;
	
	delete bob;
	delete me;
	delete src;
	return 0;


}
