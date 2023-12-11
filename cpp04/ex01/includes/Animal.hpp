/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:59:34 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:50:16 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "Includes.hpp"

class	Animal {

protected :

	std::string	_type;
	
public :

	Animal			( void );
	virtual ~Animal	( void );
	Animal			(const Animal &obj);
	Animal			&operator=(const Animal &obj);

	std::string			getType		( void ) const;
	virtual void	makeSound	( void ) const;


	virtual	Brain	*getBrain	( void ) const;
};

#endif