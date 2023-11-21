/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:48:20 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/15 13:30:40 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	
public :

	Fixed	( void );
	~Fixed	( void );
	Fixed	( const Fixed &Fix );
	Fixed	&operator=(const Fixed &Fix);

	int		getRawBits ( void ) const;
	void	setRawBits( int const raw );

private :

	int					_nbr;
	static int const	_bits = 8;

};

#endif