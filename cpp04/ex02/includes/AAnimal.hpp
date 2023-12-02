/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:59:34 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/01 17:09:10 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "Includes.hpp"

class	AAnimal {

protected :

	string	_type;
	AAnimal	( void );
	AAnimal	(const AAnimal &obj);
	AAnimal	&operator=(const AAnimal &obj);

public :

	virtual 		~AAnimal	( void );
	string			getType		( void ) const;
	virtual void	makeSound	( void ) const;


	virtual	Brain	*getBrain	( void ) const;
};

#endif