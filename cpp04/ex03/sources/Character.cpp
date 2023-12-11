/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:28:54 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/02 15:57:00 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"

///////////////////////////////////////////////////////
//						FUNCTIONS					 //
///////////////////////////////////////////////////////

void	Character::equip ( AMateria *m )
{
	if (m)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!this->getMateria(i))
			{
				this->_inventory[i] = m;
				break;
			}
		}
	}
}

void	Character::unequip( int idx )
{
	if ((idx >= 0 && idx < 4) && this->getMateria(idx) != NULL) 
		this->_inventory[idx] = NULL;
}

void	Character::use ( int idx, ICharacter &target )
{
	if (!this->_inventory[idx])	{ std::cout << RED << "no materia equipped." << END << std::endl; return; }
	
	this->_inventory[idx]->use(target);
}

///////////////////////////////////////////////////////
//						GETTERS					     //
///////////////////////////////////////////////////////

std::string const &	Character::getName ( void ) const
{
	return (this->_name);
}

AMateria *		Character::getMateria ( int i ) const
{
	return (this->_inventory[i]);
}

///////////////////////////////////////////////////////
//					CONSTRUCTORS				     //
///////////////////////////////////////////////////////


Character::Character ( void )
{
	std::cout << "Character Constructor Called" << std::endl;
	this->_name = "Unnamed";
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	return ;
}

Character::Character ( const Character &obj )
{
	std::cout << "Character Copy Constructor Called" << std::endl;
	for (int i = 0; i < 4; i++)
	{	if (obj._inventory[i]) {this->_inventory[i] = obj._inventory[i]->clone();}
		else {this->_inventory[i] = NULL;}
	}
	*this = obj;
	return ;
}

Character	&Character::operator=(const Character &obj)
{
    std::cout << "Character Copy Assignment Constructor Called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
	}
    this->_name = obj.getName();
    for (int i = 0; i < 4; i++)
    {
        if (obj.getMateria(i) != NULL)
            this->_inventory[i] = obj.getMateria(i)->clone();
        else
            this->_inventory[i] = NULL;
    }
    return (*this);
}

Character::~Character ( void )
{
	std::cout << "Character Destructor Called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
	}
	return ;
}

Character::Character ( const std::string &name )
{
	std::cout << "Character Name Constructor Called" << std::endl;
	this->_name = name;	
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	return ;
}