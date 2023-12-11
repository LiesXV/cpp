/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:48:31 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:51:04 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"

MateriaSource::MateriaSource ( void )
{
	std::cout << "MateriaSource Default Constructor Called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

MateriaSource::~MateriaSource ( void )
{
	std::cout << "MateriaSource Destructor Called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	return ;
}

MateriaSource::MateriaSource ( const MateriaSource &obj )
{
	std::cout << "MateriaSource Copy Constructor Called" << std::endl;
	*this = obj;
	for (int i = 0; i < 4; i++)
	{
		if (obj._inventory[i])
			this->_inventory[i] = obj._inventory[i]->clone();
	}
	return ;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &obj)
{
    std::cout << "MateriaSource Copy Assignment Constructor Called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (obj._inventory[i]) {this->_inventory[i] = obj._inventory[i]->clone();}
		else {this->_inventory[i] = NULL;}
	}
	return (*this);
}

void	MateriaSource::learnMateria ( AMateria *m )
{
	if (m)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!this->_inventory[i])
			{
				this->_inventory[i] = m;
				break;
			}
		}
	}
}

AMateria *	MateriaSource::createMateria ( std::string const & type )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] && this->_inventory[i]->getType() == type)
			return this->_inventory[i]->clone();
	}
	return NULL;
}
