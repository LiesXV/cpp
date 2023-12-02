/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:18:41 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/01 19:27:31 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"

Cat::Cat ( void )
{
	cerr << "Cat Default Constructor Called" << endl;
	this->_type = "Cat";
	this->_brain = new Brain ();
	return ;
}

Cat::~Cat ( void )
{
	cerr << "Cat Destructor Called" << endl;
	delete this->_brain;
	return ;
}

Cat	&Cat::operator=(const Cat &obj)
{
	cerr << "Cat Copy Assignement Constructor Called";
	this->_type = obj.getType();
	for (int i = 0; i < 100; i++)
	{
		this->getBrain()->setIdea(i, obj.getBrain()->getIdea(i));
	}
	return (*this);
}

Cat::Cat(const Cat &obj)
{
	cerr << "Cat Copy Constructor Called" << endl;
	this->_type = obj.getType();
	this->_brain = new Brain (*obj.getBrain());
	return ;
}

void	Cat::makeSound( void ) const
{
	cout << "Miaouuuu  !" << endl;
}

Brain *	Cat::getBrain( void ) const
{
	return (this->_brain);
}
