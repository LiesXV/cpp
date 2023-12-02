/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:58:15 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/02 18:57:08 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"


///////////////////////////////////////////////////////
//						FUNCTIONS					 //
///////////////////////////////////////////////////////


void	Cure::use ( ICharacter &target )
{
	cout << GREEN << "* heals " << target.getName() << "'s wounds *" << END << endl;
	return ;
}

AMateria*	Cure::clone( void ) const
{
	return new Cure (*this);
}

///////////////////////////////////////////////////////
//					CONSTRUCTORS				     //
///////////////////////////////////////////////////////


Cure::Cure ( void ) : AMateria( "cure" )
{
	return ;
}

Cure::~Cure ( void )
{
	return ;
}

Cure::Cure ( const Cure &obj ) : AMateria ( obj )
{
	return ;
}

Cure	&Cure::operator=(const Cure &obj)
{
	this->_type = obj.getType();
	return (*this);
}
