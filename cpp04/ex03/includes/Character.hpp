/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:39:35 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/02 16:44:57 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"

class Character : public ICharacter {

private :

	// AMateria *_inventory[4];
	string _name;


public :

	Character	( void );
	~Character	( void );
	Character 	( const string &name );
	Character 	( const Character &obj );
	Character	&operator=(const Character &obj);


	virtual	string const &	getName		( void ) const;

};