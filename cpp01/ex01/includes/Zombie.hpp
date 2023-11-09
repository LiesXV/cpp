/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:07:14 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/08 13:38:00 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie {
	
public :

	Zombie ( void );
	~Zombie ( void );
	Zombie ( std::string name );
	void announce( void ) const;
	void addName ( std::string name );

private :

	std::string	_name;
};

Zombie* zombieHorde( int N, std::string name );

#endif