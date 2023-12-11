/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:39:35 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:50:16 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "Includes.hpp"

class Character : public ICharacter {

private :

	AMateria *_inventory[4];
	std::string _name;


public :

	Character	( void );
	~Character	( void );
	Character 	( const std::string &name );
	Character 	( const Character &obj );
	Character	&operator=(const Character &obj);

	std::string const &	getName		( void ) const;
	AMateria *		getMateria	( int i ) const;
	
	void 			equip		( AMateria *m );
	void 			unequip		( int idx );
	void 			use			( int idx, ICharacter& target );

};

#endif