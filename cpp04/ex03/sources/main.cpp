/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:16:11 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/04 12:44:10 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"

int main (void)
{

	IMateriaSource* src = new MateriaSource();

	cout << endl;
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	cout << endl;
	
	ICharacter* me = new Character("me");
	
	cout << endl;
	
	AMateria* tmp;
	
	cout << endl;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	cout << endl;
	
	ICharacter* bob = new Character("bob");
	
	cout << endl;
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	cout << endl;
	cout << endl;
	
	delete bob;
	delete me;
	delete src;
	return 0;


}
