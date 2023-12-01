/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:08:40 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/01 17:10:36 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"

Animal::Animal ( void )
{
	cerr << "Animal Default Constructor Called" << endl;
	this->_type = "N/A";
	return ;
}

Animal::~Animal ( void )
{
	cerr << "Animal Destructor Called" << endl;
	return ;
}

Animal	&Animal::operator=(const Animal &obj)
{
	cerr << "Animal Copy Assignement Constructor Called";
	this->_type = obj.getType();
	return (*this);
}

Animal::Animal(const Animal &obj)
{
	cerr << "Animal Copy Constructor Called" << endl;
	*this = obj;
	return ;
}

string	Animal::getType ( void ) const
{
	return (this->_type);
}

void	Animal::makeSound( void ) const
{
	cout << "Animal not recognized." << endl;
}


Brain *	Animal::getBrain( void ) const
{
	return (NULL);
}