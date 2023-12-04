/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:32:12 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/03 17:24:25 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_CHARACTER_HPP
# define I_CHARACTER_HPP

#include "Includes.hpp"

class ICharacter
{
public:

	virtual					~ICharacter	( void ) {}
	virtual	string const &	getName		( void ) const = 0;
	virtual	void 			equip		( AMateria *m ) = 0;
	virtual	void 			unequip		(int idx) = 0;
	virtual	void 			use			(int idx, ICharacter& target) = 0;
	
};

#endif