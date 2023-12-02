/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:01:43 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/02 15:56:31 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"


void	FragTrap::highFivesGuys( void )
{
	if (this->getHitPoints() <= 0)
		cout << "FragTrap " << this->_name << " is dead and can't high five." << endl;
	else if (this->getEnergyPoints() <= 0)
		cout << "FragTrap " << this->_name << " does not have enough energy to high five" << endl;
	else
		cout << this->_name << " wants to high Five!" << endl;
}

///////////////////////////////////////////////////////
//					CONSTRUCTORS				     //
///////////////////////////////////////////////////////

FragTrap::FragTrap( void )
{
	cout << "Default FragTrap Constructor Called" << endl;
	this->_name = "FragTrap";
	this->_attackDamages = 30;
	this->_energyPoints = 100;
	this->_hitPoints = 100;
	return ;
}

FragTrap::FragTrap( string name )
{
	cout << "Named FragTrap Constructor Called" << endl;
	this->_name = name;
	this->_attackDamages = 30;
	this->_energyPoints = 100;
	this->_hitPoints = 100;
	return ;
}

FragTrap::~FragTrap( void )
{
	cout << "FragTrap Destructor Called (" << this->getName() << ")." << endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	cout << "FragTrap copy Constructor called" << endl;
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