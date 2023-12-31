/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:35:40 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/03 13:21:22 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "Includes.hpp"

class Ice : public AMateria {

public :

	Ice		( void );
	~Ice	( void );
	Ice		( const Ice &obj );
	Ice		&operator=(const Ice& obj);
	
	void		use		(ICharacter &target);
	AMateria*	clone	( void ) const;
	
};

#endif