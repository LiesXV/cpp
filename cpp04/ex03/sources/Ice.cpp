/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:40:47 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:45:28 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"

///////////////////////////////////////////////////////
//						FUNCTIONS					 //
///////////////////////////////////////////////////////


void		Ice::use ( ICharacter &target )
{
	std::cout << BLUE << "* shoots an ice bolt at " << target.getName() << " *" << END << std::endl;
	return ;
}

AMateria*	Ice::clone( void ) const
{
	return new Ice (*this);
}


///////////////////////////////////////////////////////
//					CONSTRUCTORS				     //
///////////////////////////////////////////////////////


Ice::Ice ( void ) : AMateria( "ice" )
{
	return ;
}

Ice::~Ice ( void )
{
	return ;
}

Ice::Ice ( const Ice &obj ) : AMateria ( obj )
{
	return ;
}

Ice	&Ice::operator=(const Ice &obj)
{
	this->_type = obj.getType();
	return (*this);
}
