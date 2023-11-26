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
	cout << "WrongAnimal Default Constructor Called" << endl;
	this->_type = "N/A";
	return ;
}

WrongAnimal::~WrongAnimal ( void )
{
	cout << "WrongAnimal Destructor Called" << endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &obj)
{
	cout << "WrongAnimal Copy Assignement Constructor Called";
	this->_type = obj.getType();
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	cout << "WrongAnimal Copy Constructor Called" << endl;
	*this = obj;
	return ;
}

string	WrongAnimal::getType ( void ) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound( void ) const
{
	cout << "WrongAnimal not recognized." << endl;
}