/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:06:49 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/21 18:06:36 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

//							CONSTRUCTEURS PAR DEFAUT
Fixed::~Fixed ( void )
{
	std::cout << "Destructor Called" << std::endl;
	return ;
}

Fixed::Fixed ( void )
{
	std::cout << "Default Constructor Called" << std::endl;
	this->_nbr = 0;
	return ;
}

//							CONSTRUCTEURS				

Fixed::Fixed ( const int number)
{
	std::cout << "Int constructor called" << std::endl;
	this->_nbr = number << this->_bits;
	return ;
}

Fixed::Fixed ( const float number)
{
	std::cout << "Float constructor called" << std::endl;
	this->_nbr = roundf(number * (1 << this->_bits));
	return ;
}

Fixed::Fixed ( const Fixed &Fix )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = Fix;	
}


//							FONCTIONS MEMBRES

int	Fixed::getRawBits ( void ) const
{
	return (this->_nbr);
}

void	Fixed::setRawBits( int const raw )
{
	this->_nbr = raw;
	return;
}

float	Fixed::toFloat	( void ) const
{
	return (static_cast<float>(this->_nbr) / (1 << this->_bits));
}

int		Fixed::toInt( void ) const
{
	return (this->_nbr >> this->_bits);
}

//							SURCHARGES D'OPERATEUR

//			+ - * / =

Fixed	&Fixed::operator=(const Fixed &Fix)
{
	this->setRawBits(Fix.getRawBits());
	return (*this);
}
		Fixed	Fixed::operator+(const Fixed &Fix)
		{
			Fixed newFix = this->toFloat() + Fix.toFloat();		
			return (newFix);
		}
				Fixed	Fixed::operator-(const Fixed &Fix)
				{
					Fixed newFix = this->toFloat() - Fix.toFloat();			
					return (newFix);
				}
						Fixed	Fixed::operator*(const Fixed &Fix)
						{
							Fixed newFix = this->toFloat() * Fix.toFloat();				
							return (newFix);
						}
								Fixed	Fixed::operator/(const Fixed &Fix)
								{
									Fixed newFix = this->toFloat() / Fix.toFloat();					
									return (newFix);
								}

//			< > <= >= != ==

bool	Fixed::operator<(const Fixed &Fix)
{	
	return (this->toFloat() < Fix.toFloat());
}
	bool	Fixed::operator>(const Fixed &Fix)
	{	
		return (this->toFloat() > Fix.toFloat());
	}
		bool	Fixed::operator>=(const Fixed &Fix)
		{	
			return (this->toFloat() >= Fix.toFloat());
		}
			bool	Fixed::operator<=(const Fixed &Fix)
			{	
				return (this->toFloat() <= Fix.toFloat());
			}
				bool	Fixed::operator!=(const Fixed &Fix)
				{	
					return (this->toFloat() != Fix.toFloat());
				}
					bool	Fixed::operator==(const Fixed &Fix)
					{	
						return (this->toFloat() == Fix.toFloat());
					}





std::ostream &operator<<(std::ostream &os, const Fixed &Fix)
{
	
	os << Fix.toFloat();
	return os;
	
}