/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:18:10 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/25 16:57:00 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"



void	ClapTrap::beRepaired(unsigned int amount)
{
	if (amount <= 0)
		cout << "Amount of damages must be superior to 0." << endl;
	if (this->getHitPoints() == 0)
		cout << this->getName() << " is already dead." << endl;
	else if (this->getEnergyPoint() > 0)
	{
		if (this->getHitPoints() + amount <= 65535)
		{
			this->_hitPoints += amount;
			cout << this->getName() << " healed himself for " << amount << " HP's." << endl;
		}
		else if (this->getHitPoints() == 65535)
		{
			cout << this->getName() << " is already full HP's." << endl;
			return ;
		}
		else
		{
			cout << this->getName() << " healed himself for " << 65535 - this->getHitPoints() << " HP's." << endl;
			this->_hitPoints = 65535;
		}
		this->_energyPoints--;
	}
	else
		cout << this->getName() << " have no more EP's." << endl;
}



void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount <= 0)
		cout << "Amount of damages must be superior to 0." << endl;
	if (this->getHitPoints() <= 0)
		cout << this->getName() << " is already dead." << endl;
	else if (amount >= this->getHitPoints())
	{
		cout << this->getName() << " lost " << this->getHitPoints() << " HP's." << endl;
		this->_hitPoints = 0;
		cout << this->getName() << " have no more HPs..." << endl;
	}
	else
	{
		cout << this->getName() << " lost " << amount << " HP's." << endl;
		this->_hitPoints -= amount;
	}
}


void	ClapTrap::attack(const std::string& target)
{
	if (this->getHitPoints() <= 0)
		cout << this->getName() << " is dead and can't attack." << endl;
	else if (this->getEnergyPoint() <= 0)
		cout << this->getName() << " have not enough EPs to attack." << endl;
	else
	{
		cout << this->getName() << " attacks " << target << " !" << endl;
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
unsigned int	ClapTrap::getEnergyPoint( void ) const
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
	cout << "Default ClapTrap Constructor Called" << endl;
	this->_name = "ClapTrap";
	this->_attackDamages = 0;
	this->_energyPoints = 10;
	this->_hitPoints = 10;
	return ;
}

ClapTrap::ClapTrap( string name )
{
	cout << "Named ClapTrap Constructor Called" << endl;
	this->_name = name;
	this->_attackDamages = 0;
	this->_energyPoints = 10;
	this->_hitPoints = 10;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	cout << this->_name << " Destructor Called" << endl;
	return ;
}
