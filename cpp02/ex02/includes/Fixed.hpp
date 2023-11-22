/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:48:20 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/22 18:59:45 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	
public :

	Fixed	( void );
	~Fixed	( void );
	Fixed	( const int );
	Fixed	( const float );
	Fixed	( const Fixed &Fix );
	Fixed	&operator=(const Fixed &Fix);

	int		getRawBits ( void ) const;
	void	setRawBits( int const raw );
	float	toFloat	( void ) const;
	int		toInt( void ) const;

	static Fixed & min(Fixed &nbr1, Fixed &nbr2);
	static const Fixed & min(const Fixed &nbr1, const Fixed &nbr2);
	static Fixed & max(Fixed &nbr1, Fixed &nbr2);
	static const Fixed & max(const Fixed &nbr1, const Fixed &nbr2);
	

	bool	operator<(const Fixed &Fix);
	bool 	operator>(const Fixed &Fix);
	bool	operator>=(const Fixed &Fix);
	bool	operator<=(const Fixed &Fix);
	bool	operator!=(const Fixed &Fix);
	bool	operator==(const Fixed &Fix);


	Fixed	operator+(const Fixed &Fix);
	Fixed	operator-(const Fixed &Fix);
	Fixed	operator*(const Fixed &Fix);
	Fixed	operator/(const Fixed &Fix);


	Fixed	operator++( int value );
	Fixed	operator--( int value );
	Fixed	& operator++( void );
	Fixed	& operator--( void );


private :

	int					_nbr;
	static int const	_bits = 8;

};

std::ostream	&operator<<(std::ostream &os, const Fixed &Fix);

#endif