/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:16:11 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/02 19:04:14 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"

int main (void)
{
	cout << endl;
	AMateria *materia[2];

	materia[0] = new Ice();
	materia[1] = new Cure();
	ICharacter* bob = new Character("Bob");
	cout << endl;

	cout << YELLOW << "Using Materia [2]" << END << endl;
	cout << endl;
	materia[0]->use(*bob);
	cout << endl;
	materia[1]->use(*bob);
	cout << endl;

	
	AMateria *Ice = materia[0]->clone();
	AMateria *Cure = materia[1]->clone();
	
	cout << endl;
	
	cout << YELLOW << "Using clones of Materia [2]" << END << endl;
	cout << endl;

	Ice->use(*bob);
	cout << endl;
	Cure->use(*bob);
	cout << endl;

	
	cout << endl;
	delete bob;
	delete *materia;
	cout << endl;
}