/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:35:22 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/08 16:20:38 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
# include "HumanB.hpp"

HumanB::HumanB ( std::string name) : _name(name) {
	_weapon = NULL;
	return ;
}

HumanB::~HumanB ( void ) {	
	return ;
}

void HumanB::attack ( void ) {
	 std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon & weapon) {
	_weapon = &weapon;
}