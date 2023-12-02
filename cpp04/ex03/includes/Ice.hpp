/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:35:40 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/02 18:58:44 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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