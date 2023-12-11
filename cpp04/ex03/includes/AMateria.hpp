/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:49:22 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:50:16 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP

#include "Includes.hpp"

class ICharacter;

class AMateria
{

protected:

	std::string		_type;
	
public:

			AMateria		( std::string const & type );
	virtual	~AMateria		( void );
			AMateria		( const AMateria &obj);
			AMateria		&operator=(const AMateria &obj);
	
	virtual	std::string const	&getType() const;
	
	virtual	AMateria*		clone() const = 0;
	virtual	void 			use	( ICharacter& target );
	
};

#endif