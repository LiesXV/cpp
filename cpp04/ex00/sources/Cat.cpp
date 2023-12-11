/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:18:41 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:45:28 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat ( void )
{
	std::cout << "Cat Default Constructor Called" << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::~Cat ( void )
{
	std::cout << "Cat Destructor Called" << std::endl;
	return ;
}

Cat	&Cat::operator=(const Cat &obj)
{
	std::cout << "Cat Copy Assignement Constructor Called";
	this->_type = obj.getType();
	return (*this);
}

Cat::Cat(const Cat &obj)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this = obj;
	return ;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miaouuuu  !" << std::endl;
}