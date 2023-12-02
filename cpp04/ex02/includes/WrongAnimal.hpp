/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:59:34 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/26 16:53:03 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class	WrongAnimal {

protected :

	string	_type;	
	
public :

	WrongAnimal		( void );
	~WrongAnimal	( void );
	WrongAnimal		(const WrongAnimal &obj);
	WrongAnimal		&operator=(const WrongAnimal &obj);

	string			getType ( void ) const;
	void			makeSound( void ) const;

};

#endif