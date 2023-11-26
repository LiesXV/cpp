/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:08:40 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/26 18:51:23 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"

Animal::Animal ( void )
{
	cout << "Animal Default Constructor Called" << endl;
	this->_type = "N/A";
	this->_brain = new Brain ();
	return ;
}

Animal::~Animal ( void )
{
	cout << "Animal Destructor Called" << endl;
	delete this->_brain;
	return ;
}

Animal	&Animal::operator=(const Animal &obj)
{
	cout << "Animal Copy Assignement Constructor Called";
	this->_type = obj.getType();
	return (*this);
}

Animal::Animal(const Animal &obj)
{
	cout << "Animal Copy Constructor Called" << endl;
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