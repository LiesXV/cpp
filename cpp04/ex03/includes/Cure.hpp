/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:58:25 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/02 18:58:49 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"

class Cure : public AMateria {

public : 

	Cure	( void );
	~Cure	( void );
	Cure	( const Cure &obj );
	Cure	&operator=(const Cure& obj);
	
	void		use		(ICharacter &target);
	AMateria*	clone	( void ) const;
};
