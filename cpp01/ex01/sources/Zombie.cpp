/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:07:18 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/08 13:38:11 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie ( void )
{
	std::cout << "Zombie Constructor Called" << std::endl;
	return ;
}

Zombie::Zombie ( std::string name ) : _name(name) {
	std::cout << "Zombie Constructor Called" << std::endl;
	return ;
}

Zombie::~Zombie ( void )
{
	std::cout << "Zombie Destructor Called" << std::endl;
	return ;
}

void	Zombie::announce( void ) const {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::addName ( std::string name )
{
	this->_name = name;
	return ;
}