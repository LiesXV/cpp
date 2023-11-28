/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:18:41 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/28 14:58:12 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"

Cat::Cat ( void )
{
	cerr << "Cat Default Constructor Called" << endl;
	this->_type = "Cat";
	return ;
}

Cat::~Cat ( void )
{
	cerr << "Cat Destructor Called" << endl;
	return ;
}

Cat	&Cat::operator=(const Cat &obj)
{
	cerr << "Cat Copy Assignement Constructor Called";
	this->_type = obj.getType();
	return (*this);
}

Cat::Cat(const Cat &obj)
{
	cerr << "Cat Copy Constructor Called" << endl;
	*this = obj;
	return ;
}

void	Cat::makeSound( void ) const
{
	cout << "Miaouuuu  !" << endl;
}