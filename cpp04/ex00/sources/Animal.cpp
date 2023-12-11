/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:08:40 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:50:16 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal ( void )
{
	std::cout << "Animal Default Constructor Called" << std::endl;
	this->_type = "N/A";
	return ;
}

Animal::~Animal ( void )
{
	std::cout << "Animal Destructor Called" << std::endl;
	return ;
}

Animal	&Animal::operator=(const Animal &obj)
{
	std::cout << "Animal Copy Assignement Constructor Called";
	this->_type = obj.getType();
	return (*this);
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = obj;
	return ;
}

std::string	Animal::getType ( void ) const
{
	return (this->_type);
}

void	Animal::makeSound( void ) const
{
	std::cout << "Animal not recognized." << std::endl;
}