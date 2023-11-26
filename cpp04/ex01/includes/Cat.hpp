/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:01:57 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/26 18:33:45 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Includes.hpp"

class	Cat  : public Animal {

public :

	Cat	( void );
	~Cat	( void );
	Cat	(const Cat &obj);
	Cat	&operator=(const Cat &obj);
	
	void	makeSound( void ) const;
	
};

#endif