/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:24:49 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/08 16:21:39 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

# include "HumanA.hpp"
# include "HumanB.hpp"

int main (void)
{	
	Weapon axe = Weapon("Iron Axe");
	HumanB jim("Jim");
	jim.setWeapon(axe);
	jim.attack();
	axe.setType("Diamond Axe");
	jim.attack();

	Weapon club = Weapon("Stone Sword");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("Golden Sword");
	bob.attack();
}