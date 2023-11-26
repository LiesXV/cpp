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
	cout << "WrongCat Default Constructor Called" << endl;
	this->_type = "WrongCat";
	return ;
}

WrongCat::~WrongCat ( void )
{
	cout << "WrongCat Destructor Called" << endl;
	return ;
}

WrongCat	&WrongCat::operator=(const WrongCat &obj)
{
	cout << "WrongCat Copy Assignement Constructor Called";
	this->_type = obj.getType();
	return (*this);
}

WrongCat::WrongCat(const WrongCat &obj)
{
	cout << "WrongCat Copy Constructor Called" << endl;
	*this = obj;
	return ;
}

void	WrongCat::makeSound( void ) const
{
	cout << "Miaouuuu  !" << endl;
}