/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:47:45 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/22 20:10:42 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main(void)
{
	ClapTrap Goku("Goku");
	cout << endl;
	
	cout << Goku.getName() << " have " << Goku.getHitPoints() << " HP's" << endl;
	cout << Goku.getName() << " have " << Goku.getEnergyPoint() << " EP's" << endl;
	cout << endl;

	Goku.beRepaired(65530);

	cout << Goku.getName() << " have " << Goku.getHitPoints() << " HP's" << endl;
	cout << Goku.getName() << " have " << Goku.getEnergyPoint() << " EP's" << endl;
	cout << endl;	
	
	Goku.beRepaired(65530);
	
	cout << Goku.getName() << " have " << Goku.getHitPoints() << " HP's" << endl;
	cout << Goku.getName() << " have " << Goku.getEnergyPoint() << " EP's" << endl;

}