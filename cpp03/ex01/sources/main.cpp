/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:47:45 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/25 18:23:31 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int main(void)
{
	ScavTrap Goku("Goku");
	ClapTrap Freezer("Freezer");
	cout << endl;

	
	cout << Goku.getName() << " have " << Goku.getHitPoints() << " HP's" << endl;
	cout << Goku.getName() << " have " << Goku.getEnergyPoints() << " EP's" << endl;
	cout << Freezer.getName() << " have " << Freezer.getHitPoints() << " HP's" << endl;
	cout << Freezer.getName() << " have " << Freezer.getEnergyPoints() << " EP's" << endl;
	cout << endl;

	Freezer.attack("Goku");
	Goku.takeDamage(9);

	cout << Goku.getName() << " have " << Goku.getHitPoints() << " HP's" << endl;
	cout << Goku.getName() << " have " << Goku.getEnergyPoints() << " EP's" << endl;
	cout << endl;	

	cout << Freezer.getName() << " have " << Freezer.getEnergyPoints() << " EP's" << endl;
	cout << endl;	

	Goku.beRepaired(10);
	
	cout << Goku.getName() << " have " << Goku.getHitPoints() << " HP's" << endl;
	cout << Goku.getName() << " have " << Goku.getEnergyPoints() << " EP's" << endl;
	cout << endl;	
	
	Goku.attack("Freezer");
	Freezer.takeDamage(20);
	cout << endl;	
	cout << Freezer.getName() << " have " << Freezer.getHitPoints() << " HP's" << endl;
	cout << Freezer.getName() << " have " << Freezer.getEnergyPoints() << " EP's" << endl;
	cout << endl;	
	Goku.guardGate();
	
	cout << Goku.getName() << " have " << Goku.getEnergyPoints() << " EP's" << endl;
	cout << endl;	
	
	
	Freezer.beRepaired(20);
	cout << endl;
	
	Goku.attack("Freezer");
	Freezer.takeDamage(20);
	cout << endl;	
	
	
	cout << Goku.getName() << " have " << Goku.getHitPoints() << " HP's" << endl;
	cout << Goku.getName() << " have " << Goku.getEnergyPoints() << " EP's" << endl;
	cout << endl;	

}