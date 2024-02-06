/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:11:30 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/16 13:08:33 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

;
;

class	ClapTrap {

protected :
	
	std::string			_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamages;
	
public :

	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	

	std::string			getName( void ) const;
	unsigned int	getEnergyPoints( void ) const;
	unsigned int	getAttackDamages( void ) const;
	unsigned int	getHitPoints( void ) const;


	ClapTrap	( void );
	~ClapTrap	( void );
	ClapTrap	( std::string name );
	ClapTrap	(const ClapTrap &obj);
	ClapTrap	&operator=(const ClapTrap &obj);
};

#endif