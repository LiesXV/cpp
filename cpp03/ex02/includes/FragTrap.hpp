/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:26:46 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/25 19:43:33 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {

public :

	void	highFivesGuys( void );
	
	FragTrap	( void );
	~FragTrap	( void );
	FragTrap	( string name );
	FragTrap	(const FragTrap &obj);
	FragTrap	&operator=(const FragTrap &obj);

};

#endif