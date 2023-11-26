/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:01:08 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/26 18:45:19 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Includes.hpp"

class	Dog  : public Animal {

public :

	Dog		( void );
	~Dog	( void );
	Dog		(const Dog &obj);
	Dog		&operator=(const Dog &obj);

	void	makeSound( void ) const;

};

#endif