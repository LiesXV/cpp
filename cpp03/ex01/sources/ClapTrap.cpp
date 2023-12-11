/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:18:10 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:45:28 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"



void	ClapTrap::beRepaired(unsigned int amount)
{
	if (amount <= 0)
		std::cout << "Amount of damages must be superior to 0." << std::endl;
	if (this->getHitPoints() == 0)
		std::cout << this->getName() << " is already dead." << std::endl;
	else if (this->getEnergyPoints() > 0)
	{
		if (this->getHitPoints() + amount <= 65535)
		{
			this->_hitPoints += amount;
			std::cout << this->getName() << " healed himself for " << amount << " HP's." << std::endl;
		}
		else if (this->getHitPoints() == 65535)
		{
			std::cout << this->getName() << " is already full HP's." << std::endl;
			return ;
		}
		else
		{
			std::cout << this->getName() << " healed himself for " << 65535 - this->getHitPoints() << " HP's." << std::endl;
			this->_hitPoints = 65535;
		}
		this->_energyPoints--;
	}
	else
		std::cout << this->getName() << " have no more EP's." << std::endl;
}



void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount <= 0)
		std::cout << "Amount of damages must be superior to 0." << std::endl;
	if (this->getHitPoints() <= 0)
		std::cout << this->getName() << " is already dead." << std::endl;
	else if (amount >= this->getHitPoints())
	{
		std::cout << this->getName() << " lost " << this->getHitPoints() << " HP's." << std::endl;
		this->_hitPoints = 0;
		std::cout << this->getName() << " have no more HPs..." << std::endl;
	}
	else
	{
		std::cout << this->getName() << " lost " << amount << " HP's." << std::endl;
		this->_hitPoints -= amount;
	}
}


void	ClapTrap::attack(const std::string& target)
{
	if (this->getHitPoints() <= 0)
		std::cout << this->getName() << " is dead and can't attack." << std::endl;
	else if (this->getEnergyPoints() <= 0)
		std::cout << this->getName() << " have not enough EPs to attack." << std::endl;
	else
	{
		std::cout << this->getName() << " attacks " << target << " causing " << this->getAttackDamages() << " damages !" << std::endl;
		this->_energyPoints--;	
	}
}

///////////////////////////////////////////////////////
//						GET						     //
///////////////////////////////////////////////////////

string			ClapTrap::getName( void ) const
{
	return (this->_name);
}
unsigned int	ClapTrap::getEnergyPoints( void ) const
{
	return (this->_energyPoints);
}
unsigned int	ClapTrap::getAttackDamages( void ) const
{
	return (this->_attackDamages);
}
unsigned int	ClapTrap::getHitPoints( void ) const
{
	return (this->_hitPoints);
}

///////////////////////////////////////////////////////
//					CONSTRUCTORS				     //
///////////////////////////////////////////////////////

ClapTrap::ClapTrap( void )
{
	std::cout << "Default ClapTrap Constructor Called" << std::endl;
	this->_name = "ClapTrap";
	this->_attackDamages = 0;
	this->_energyPoints = 10;
	this->_hitPoints = 10;
	return ;
}

ClapTrap::ClapTrap( string name )
{
	std::cout << "Named ClapTrap Constructor Called" << std::endl;
	this->_name = name;
	this->_attackDamages = 0;
	this->_energyPoints = 10;
	this->_hitPoints = 10;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap Destructor Called (" << this->getName() << ")." << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << "ClapTrap copy Constructor called" << std::endl;
	*this = obj;
	return ;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &obj)
{
	this->_name = obj.getName();
	this->_hitPoints = obj.getHitPoints();
	this->_energyPoints = obj.getEnergyPoints();
	this->_attackDamages = obj.getAttackDamages();
	return (*this);
}