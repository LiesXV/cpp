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

	std::string	_type;

public :

	virtual 		~AAnimal	( void ) {};

	virtual std::string	getType		( void ) const { return this->_type; };

	virtual void	makeSound	( void ) const = 0;
	virtual	Brain	*getBrain	( void ) const = 0;
};

#endif