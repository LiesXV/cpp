/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:28:54 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/02 15:57:00 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"


///////////////////////////////////////////////////////
//						GETTERS					     //
///////////////////////////////////////////////////////

string const &	Character::getName ( void ) const
{
	return (this->_name);
}

///////////////////////////////////////////////////////
//					CONSTRUCTORS				     //
///////////////////////////////////////////////////////


Character::Character ( void )
{
	cout << "Character Constructor Called" << endl;
	this->_name = "Unnamed";
	return ;
}

Character::Character ( const Character &obj )
{
	cout << "Character Copy Constructor Called" << endl;
	*this =  obj;
	return ;
}

Character	&Character::operator=(const Character &obj)
{
	if (this != &obj) {
        cerr << "Character Copy Assignment Constructor Called";
        this->_name = obj.getName();
    }
    return (*this);
}

Character::~Character ( void )
{
	cout << "Character Destructor Called" << endl;
	return ;
}

Character::Character ( const string &name )
{
	cout << "Character Name Constructor Called" << endl;
	this->_name = name;
	return ;
}