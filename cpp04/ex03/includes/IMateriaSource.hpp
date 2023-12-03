/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 13:17:06 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/03 14:09:37 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_MATERIA_SOURCE_HPP
# define I_MATERIA_SOURCE_HPP

#include "Includes.hpp"
#include "AMateria.hpp"

class IMateriaSource	{
	
public:

	virtual				~IMateriaSource	( void ) {}
	virtual	void		learnMateria	( AMateria* ) = 0;
	virtual	AMateria*	createMateria	( std::string const & type ) = 0;
	
};

#endif