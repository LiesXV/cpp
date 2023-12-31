/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:45:46 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:51:04 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include "Includes.hpp"

class MateriaSource : public IMateriaSource {

private :

	AMateria *_inventory[4];

public :

	MateriaSource( void );
	~MateriaSource( void );
	MateriaSource( const MateriaSource &obj );
	MateriaSource &operator=( const MateriaSource &obj );

	void		learnMateria	( AMateria *m );
	AMateria*	createMateria	( std::string const & type );
};

#endif