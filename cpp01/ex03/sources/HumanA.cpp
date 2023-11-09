/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:35:22 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/08 16:20:32 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
# include "HumanA.hpp"

HumanA::HumanA ( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon) {
	return ;
}

HumanA::~HumanA ( void ) {	
	return ;
}

void HumanA::attack ( void ) {
	
	 std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;

}