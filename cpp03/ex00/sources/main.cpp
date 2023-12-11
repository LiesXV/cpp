/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:47:45 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:45:28 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main(void)
{
	ClapTrap Goku("Goku");
	ClapTrap Freezer("Freezer");
	std::cout << std::endl;

	
	std::cout << Goku.getName() << " have " << Goku.getHitPoints() << " HP's" << std::endl;
	std::cout << Goku.getName() << " have " << Goku.getEnergyPoints() << " EP's" << std::endl;
	std::cout << Freezer.getName() << " have " << Freezer.getHitPoints() << " HP's" << std::endl;
	std::cout << Freezer.getName() << " have " << Freezer.getEnergyPoints() << " EP's" << std::endl;
	std::cout << std::endl;

	Freezer.attack("Goku");
	Goku.takeDamage(9);

	std::cout << Goku.getName() << " have " << Goku.getHitPoints() << " HP's" << std::endl;
	std::cout << Goku.getName() << " have " << Goku.getEnergyPoints() << " EP's" << std::endl;
	std::cout << std::endl;	

	std::cout << Freezer.getName() << " have " << Freezer.getEnergyPoints() << " EP's" << std::endl;
	std::cout << std::endl;	

	Goku.beRepaired(10);
	
	std::cout << Goku.getName() << " have " << Goku.getHitPoints() << " HP's" << std::endl;
	std::cout << Goku.getName() << " have " << Goku.getEnergyPoints() << " EP's" << std::endl;
	std::cout << std::endl;	
	
	Goku.attack("Freezer");
	Freezer.takeDamage(20);
	std::cout << std::endl;	
	std::cout << Freezer.getName() << " have " << Freezer.getHitPoints() << " HP's" << std::endl;
	std::cout << Freezer.getName() << " have " << Freezer.getEnergyPoints() << " EP's" << std::endl;
	std::cout << std::endl;	
	
	std::cout << Goku.getName() << " have " << Goku.getEnergyPoints() << " EP's" << std::endl;
	std::cout << std::endl;	
	
	
	Freezer.beRepaired(20);
	std::cout << std::endl;
	
	Goku.attack("Freezer");
	Freezer.takeDamage(20);
	std::cout << std::endl;	
	
	
	std::cout << Goku.getName() << " have " << Goku.getHitPoints() << " HP's" << std::endl;
	std::cout << Goku.getName() << " have " << Goku.getEnergyPoints() << " EP's" << std::endl;
	std::cout << std::endl;	

}