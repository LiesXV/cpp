/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:16:11 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/03 17:40:39 by ibenhaim         ###   ########.fr       */
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
	Character* will = new Character("Will");
	
	cout << endl;

	cout << YELLOW << "Using Materias directly" << END << endl;
	cout << endl;
	materia[0]->use(*bob);
	cout << endl;
	materia[1]->use(*bob);
	cout << endl;

	
	bob->equip(materia[0]->clone());
	will->equip(materia[1]->clone());
	
	cout << endl;
	
	cout << YELLOW << "Using clones of Materia in bob's and will's inventories." << END << endl;
	cout << endl;

	bob->use(0, *will);
	cout << endl;
	will->use(0, *bob);
	cout << endl;
	will->use(2, *bob);
	cout << endl;
	
	cout << YELLOW << "Creating clones and make them use theirs Materias" << END << endl;
	cout << endl;
	
	ICharacter* bobby = bob;
	Character *william(will);

	if (bobby) {
		cout << "bobby use 1" << endl;
        bobby->use(1, *william);
        cout << endl;
		cout << "bobby use 0" << endl;
        bobby->use(0, *william);
        cout << endl;
    } else {
        cerr << "Failed to cast Bob to bBbby." << endl;
    }
	
	if (william) {
		cout << "william use 0" << endl;
        william->use(0, *bobby);
        cout << endl;
    } else {
        cerr << "Failed to cast Will to William." << endl;
    }

	cout << endl;
	
	william = static_cast<Character *>(bob);
		
	if (william) {
		cout << "william who became bobby use 0" << endl;
        william->use(0, *bobby);
        cout << endl;
    } else {
        cerr << "Failed to cast Will to William." << endl;
    }
	
	cout << endl;
	
	
	william->unequip(0);
	william->equip(materia[1]->clone());

	cout << endl;
	
	if (william) {
		cout << "william who unnequiped ice use his new materia" << endl;
        william->use(2, *bobby);
        cout << endl;
    } else {
        cerr << "Failed to cast Will to William." << endl;
    }
	
	delete bob;
	delete will;
	delete materia[0];
	delete materia[1];
	
	cout << endl;

}
