/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:06:49 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/02 15:56:31 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed ( void )
{
	std::cout << "Default Constructor Called" << std::endl;
	this->_nbr = 0;
	return ;
}

Fixed::~Fixed ( void )
{
	std::cout << "Destructor Called" << std::endl;
	return ;
}

Fixed::Fixed ( const Fixed &Fix )
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = Fix;
}

int	Fixed::getRawBits ( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nbr);
}

void	Fixed::setRawBits( int const raw )
{
	this->_nbr = raw;
	return;
}

Fixed	&Fixed::operator=(const Fixed &Fix)
{
	std::cout << "Copy assignement operator called" << std::endl;
	
	this->setRawBits(Fix.getRawBits());
	
	return (*this);
}