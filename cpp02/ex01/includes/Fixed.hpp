/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:48:20 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/21 16:42:26 by ibenhaim         ###   ########.fr       */
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

private :

	int					_nbr;
	static int const	_bits = 8;

};

std::ostream &operator<<(std::ostream &os, const Fixed &Fix);

#endif