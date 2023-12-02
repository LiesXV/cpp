/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:01:57 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/26 16:53:59 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat  : public WrongAnimal {

public :

	WrongCat	( void );
	~WrongCat	( void );
	WrongCat	(const WrongCat &obj);
	WrongCat	&operator=(const WrongCat &obj);
	
	void	makeSound( void ) const;
};

#endif