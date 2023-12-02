/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:08:40 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/01 17:10:36 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"

AAnimal::AAnimal ( void )
{
	cerr << "AAnimal Default Constructor Called" << endl;
	this->_type = "N/A";
	return ;
}

AAnimal::~AAnimal ( void )
{
	cerr << "AAnimal Destructor Called" << endl;
	return ;
}

AAnimal	&AAnimal::operator=(const AAnimal &obj)
{
	cerr << "AAnimal Copy Assignement Constructor Called";
	this->_type = obj.getType();
	return (*this);
}

AAnimal::AAnimal(const AAnimal &obj)
{
	cerr << "AAnimal Copy Constructor Called" << endl;
	*this = obj;
	return ;
}

string	AAnimal::getType ( void ) const
{
	return (this->_type);
}

void	AAnimal::makeSound( void ) const
{
	cout << "AAnimal not recognized." << endl;
}


Brain *	AAnimal::getBrain( void ) const
{
	return (NULL);
}