/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:58:48 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/25 18:23:43 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

public :

	void	guardGate();
	void	attack( const string & target);
	
	ScavTrap	( void );
	~ScavTrap	( void );
	ScavTrap	( string name );
	ScavTrap	(const ScavTrap &obj);
	ScavTrap	&operator=(const ScavTrap &obj);
};

#endif