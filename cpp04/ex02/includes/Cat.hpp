/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:01:57 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/02 12:35:44 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Includes.hpp"

class	Cat  : public AAnimal {

private :

	Brain *	_brain;

public :

	Cat		( void );
	Cat		(const Cat &obj);
	~Cat	( void );
	Cat		&operator=(const Cat &obj);
	
	virtual void	makeSound	( void ) const;
	Brain	*getBrain	( void ) const;

};

#endif