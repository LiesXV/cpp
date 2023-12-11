/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:01:43 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:45:28 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"


void	ScavTrap::guardGate()
{
	if (this->getHitPoints() <= 0)
		std::cout << this->getName() << " is dead and can't enter in Super Sayian mode." << std::endl;
	else if (this->getEnergyPoints() <= 0)
		std::cout << this->getName() << " have not enough EPs to enter in Super Sayian mode." << std::endl;
	else
	{
		std::cout << this->getName() << " Entered in Super Sayian mode." << std::endl;
		this->_energyPoints--;
	}
	return ;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->getHitPoints() <= 0)
		std::cout << this->getName() << " is dead and can't attack." << std::endl;
	else if (this->getEnergyPoints() <= 0)
		std::cout << this->getName() << " have not enough EPs to attack." << std::endl;
	else
	{
		std::cout << this->getName() << " is launching a Kamehameha on " << target << " causing " << this->getAttackDamages() << " damages !" << std::endl;
		this->_energyPoints--;	
	}
}

///////////////////////////////////////////////////////
//					CONSTRUCTORS				     //
///////////////////////////////////////////////////////

ScavTrap::ScavTrap( void )
{
	std::cout << "Default ScavTrap Constructor Called" << std::endl;
	this->_name = "ScavTrap";
	this->_attackDamages = 20;
	this->_energyPoints = 50;
	this->_hitPoints = 100;
	return ;
}

ScavTrap::ScavTrap( string name )
{
	std::cout << "Named ScavTrap Constructor Called" << std::endl;
	this->_name = name;
	this->_attackDamages = 20;
	this->_energyPoints = 50;
	this->_hitPoints = 100;
	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap Destructor Called (" << this->getName() << ")." << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	std::cout << "ScavTrap copy Constructor called" << std::endl;
	*this = obj;
	return ;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &obj)
{
	this->_name = obj.getName();
	this->_hitPoints = obj.getHitPoints();
	this->_energyPoints = obj.getEnergyPoints();
	this->_attackDamages = obj.getAttackDamages();
	return (*this);
}