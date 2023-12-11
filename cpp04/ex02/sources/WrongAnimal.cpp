/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:08:40 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/26 16:43:59 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal ( void )
{
	std::cout << "WrongAnimal Default Constructor Called" << std::endl;
	this->_type = "N/A";
	return ;
}

WrongAnimal::~WrongAnimal ( void )
{
	std::cout << "WrongAnimal Destructor Called" << std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal Copy Assignement Constructor Called";
	this->_type = obj.getType();
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
	*this = obj;
	return ;
}

std::string	WrongAnimal::getType ( void ) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal not recognized." << std::endl;
}