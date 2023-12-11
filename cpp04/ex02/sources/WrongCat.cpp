/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:18:41 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/26 16:48:01 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat ( void )
{
	std::cout << "WrongCat Default Constructor Called" << std::endl;
	this->_type = "WrongCat";
	return ;
}

WrongCat::~WrongCat ( void )
{
	std::cout << "WrongCat Destructor Called" << std::endl;
	return ;
}

WrongCat	&WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "WrongCat Copy Assignement Constructor Called";
	this->_type = obj.getType();
	return (*this);
}

WrongCat::WrongCat(const WrongCat &obj)
{
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	*this = obj;
	return ;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Miaouuuu  !" << std::endl;
}