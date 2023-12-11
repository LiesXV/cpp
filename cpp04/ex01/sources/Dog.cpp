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

#include "../includes/Includes.hpp"

Dog::Dog ( void )
{
	std::cerr << "Dog Default Constructor Called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain ();
	return ;
}

Dog::~Dog ( void )
{
	std::cerr << "Dog Destructor Called" << std::endl;
	delete this->_brain;
	return ;
}

Dog	&Dog::operator=(const Dog &obj)
{
	std::cerr << "Dog Copy Assignement Constructor Called";
	this->_type = obj.getType();
	for (int i = 0; i < 100; i++)
	{
		this->getBrain()->setIdea(i, obj.getBrain()->getIdea(i));
	}
	return (*this);
}

Dog::Dog(const Dog &obj)
{
	std::cerr << "Dog Copy Constructor Called" << std::endl;
	this->_type = obj.getType();
	this->_brain = new Brain (*obj.getBrain());
	return ;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Wouaf Wouaf  !" << std::endl;
}

Brain *	Dog::getBrain( void ) const
{
	return (this->_brain);
}
