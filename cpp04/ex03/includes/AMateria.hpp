/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:49:22 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/02 18:57:36 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes.hpp"

class AMateria
{
protected:

	string		_type;
	
public:

			AMateria		( string const & type );
	virtual	~AMateria		( void );
			AMateria		( const AMateria &obj);
			AMateria		&operator=(const AMateria &obj);
	
	virtual	string const	&getType() const;
	
	virtual	AMateria*	clone() const = 0;
	virtual	void 			use( ICharacter& target );
	
};