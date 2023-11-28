/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:21:14 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/28 14:58:13 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"

Dog::Dog ( void )
{
	cerr << "Dog Default Constructor Called" << endl;
	this->_type = "Dog";
	return ;
}

Dog::~Dog ( void )
{
	cerr << "Dog Destructor Called" << endl;
	return ;
}

Dog	&Dog::operator=(const Dog &obj)
{
	cerr << "Dog Copy Assignement Constructor Called";
	this->_type = obj.getType();
	return (*this);
}

Dog::Dog(const Dog &obj)
{
	cerr << "Dog Copy Constructor Called" << endl;
	*this = obj;
	return ;
}

void	Dog::makeSound( void ) const
{
	cout << "Wouaf Wouaf  !" << endl;
}