/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:13:03 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/02 18:57:22 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"

///////////////////////////////////////////////////////
//						FUNCTIONS					 //
///////////////////////////////////////////////////////

void	AMateria::use( ICharacter &target )
{
	(void)target;
	cout << "This Materia have no type" << endl;
}

///////////////////////////////////////////////////////
//						GETTERS					     //
///////////////////////////////////////////////////////

string const &	AMateria::getType( void ) const
{
	return (this->_type);
}

///////////////////////////////////////////////////////
//					CONSTRUCTORS				     //
///////////////////////////////////////////////////////

AMateria::AMateria ( string const & type )
{
	cerr << "AMateria copy Constructor" << endl;
	this->_type = type;
	return ;
}

AMateria::AMateria ( const AMateria &obj )
{
	cerr << "AMateria copy Constructor" << endl;
	this->_type = obj.getType();
	return ;
}

AMateria	&AMateria::operator=(const AMateria &obj)
{
	cerr << "AMateria Copy Assignement Constructor Called";
	this->_type = obj.getType();
	return (*this);
}

AMateria::~AMateria ( void )
{
	cerr << "AMateria Default Destructor" << endl;
	return ;
}
