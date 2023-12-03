/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:48:31 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/03 17:58:20 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"

MateriaSource::MateriaSource ( void )
{
	cout << "MateriaSource Default Constructor Called" << endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

MateriaSource::~MateriaSource ( void )
{
	cout << "MateriaSource Destructor Called" << endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	return ;
}

MateriaSource::MateriaSource ( const MateriaSource &obj )
{
	cout << "MateriaSource Copy Constructor Called" << endl;
	*this = obj;
	return ;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &obj)
{
    cout << "MateriaSource Copy Assignment Constructor Called" << endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
		this->_inventory[i] = obj._inventory[i]->clone();
	}
	return (*this);
}
