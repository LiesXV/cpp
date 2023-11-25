/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:47:45 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/25 16:45:00 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main(void)
{
	ClapTrap Goku("Goku");
	ClapTrap Freezer("Freezer");
	cout << endl;

	
	cout << Goku.getName() << " have " << Goku.getHitPoints() << " HP's" << endl;
	cout << Goku.getName() << " have " << Goku.getEnergyPoint() << " EP's" << endl;
	cout << Freezer.getName() << " have " << Freezer.getHitPoints() << " HP's" << endl;
	cout << Freezer.getName() << " have " << Freezer.getEnergyPoint() << " EP's" << endl;
	cout << endl;

	Freezer.attack("Goku");
	Goku.takeDamage(9);

	cout << Goku.getName() << " have " << Goku.getHitPoints() << " HP's" << endl;
	cout << Goku.getName() << " have " << Goku.getEnergyPoint() << " EP's" << endl;
	cout << endl;	

	cout << Freezer.getName() << " have " << Freezer.getEnergyPoint() << " EP's" << endl;
	cout << endl;	

	Goku.beRepaired(10);
	
	cout << Goku.getName() << " have " << Goku.getHitPoints() << " HP's" << endl;
	cout << Goku.getName() << " have " << Goku.getEnergyPoint() << " EP's" << endl;
	cout << endl;	
	
	Goku.attack("Freezer");
	Freezer.takeDamage(20);
	cout << endl;	
	cout << Freezer.getName() << " have " << Freezer.getHitPoints() << " HP's" << endl;
	cout << Freezer.getName() << " have " << Freezer.getEnergyPoint() << " EP's" << endl;
	cout << endl;	
	
	cout << Goku.getName() << " have " << Goku.getEnergyPoint() << " EP's" << endl;
	cout << endl;	
	
	
	Freezer.beRepaired(20);
	cout << endl;
	
	Goku.attack("Freezer");
	Freezer.takeDamage(20);
	cout << endl;	
	
	
	cout << Goku.getName() << " have " << Goku.getHitPoints() << " HP's" << endl;
	cout << Goku.getName() << " have " << Goku.getEnergyPoint() << " EP's" << endl;
	cout << endl;	

}