/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:25:24 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/08 16:13:16 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon ( std::string weapon ) : _type(weapon) {
	return ;
}

Weapon::~Weapon ( void ) {	
	return ;
}

void Weapon::setType( std::string const & newType )
{
	this->_type = newType;
}

std::string const & Weapon::getType(void)
{
	return (this->_type);
}