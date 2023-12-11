/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:13:03 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:50:16 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"

///////////////////////////////////////////////////////
//						FUNCTIONS					 //
///////////////////////////////////////////////////////

void	AMateria::use( ICharacter &target )
{
	(void)target;
	std::cout << "This Materia have no type" << std::endl;
}

///////////////////////////////////////////////////////
//						GETTERS					     //
///////////////////////////////////////////////////////

std::string const &	AMateria::getType( void ) const
{
	return (this->_type);
}

///////////////////////////////////////////////////////
//					CONSTRUCTORS				     //
///////////////////////////////////////////////////////

AMateria::AMateria ( std::string const & type )
{
	std::cerr << "AMateria copy Constructor" << std::endl;
	this->_type = type;
	return ;
}

AMateria::AMateria ( const AMateria &obj )
{
	std::cerr << "AMateria copy Constructor" << std::endl;
	this->_type = obj.getType();
	return ;
}

AMateria	&AMateria::operator=(const AMateria &obj)
{
	std::cerr << "AMateria Copy Assignement Constructor Called";
	this->_type = obj.getType();
	return (*this);
}

AMateria::~AMateria ( void )
{
	std::cerr << "AMateria Default Destructor" << std::endl;
	return ;
}
