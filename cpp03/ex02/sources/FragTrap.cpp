/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:01:43 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:50:16 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"


void	FragTrap::highFivesGuys( void )
{
	if (this->getHitPoints() <= 0)
		std::cout << "FragTrap " << this->_name << " is dead and can't high five." << std::endl;
	else if (this->getEnergyPoints() <= 0)
		std::cout << "FragTrap " << this->_name << " does not have enough energy to high five" << std::endl;
	else
		std::cout << this->_name << " wants to high Five!" << std::endl;
}

///////////////////////////////////////////////////////
//					CONSTRUCTORS				     //
///////////////////////////////////////////////////////

FragTrap::FragTrap( void )
{
	std::cout << "Default FragTrap Constructor Called" << std::endl;
	this->_name = "FragTrap";
	this->_attackDamages = 30;
	this->_energyPoints = 100;
	this->_hitPoints = 100;
	return ;
}

FragTrap::FragTrap( std::string name )
{
	std::cout << "Named FragTrap Constructor Called" << std::endl;
	this->_name = name;
	this->_attackDamages = 30;
	this->_energyPoints = 100;
	this->_hitPoints = 100;
	return ;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap Destructor Called (" << this->getName() << ")." << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << "FragTrap copy Constructor called" << std::endl;
	*this = obj;
	return ;
}

FragTrap	&FragTrap::operator=(const FragTrap &obj)
{
	this->_name = obj.getName();
	this->_hitPoints = obj.getHitPoints();
	this->_energyPoints = obj.getEnergyPoints();
	this->_attackDamages = obj.getAttackDamages();
	return (*this);
}