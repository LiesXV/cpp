/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:59:34 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/28 12:17:02 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class	Animal {

protected :

	string	_type;	
	
public :

	Animal			( void );
	virtual ~Animal			( void );
	Animal			(const Animal &obj);
	Animal			&operator=(const Animal &obj);

	string			getType ( void ) const;
	virtual void	makeSound( void ) const;

};

#endif