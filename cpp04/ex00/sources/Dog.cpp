/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:21:14 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:45:28 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog ( void )
{
	std::cout << "Dog Default Constructor Called" << std::endl;
	this->_type = "Dog";
	return ;
}

Dog::~Dog ( void )
{
	std::cout << "Dog Destructor Called" << std::endl;
	return ;
}

Dog	&Dog::operator=(const Dog &obj)
{
	std::cout << "Dog Copy Assignement Constructor Called";
	this->_type = obj.getType();
	return (*this);
}

Dog::Dog(const Dog &obj)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	*this = obj;
	return ;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Wouaf Wouaf !" << std::endl;
}