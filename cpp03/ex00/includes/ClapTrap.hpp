/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:11:30 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:41:39 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

;
;


class	ClapTrap {

private :
	
	string			_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamages;
	
public :

	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	

	string			getName( void ) const;
	unsigned int	getEnergyPoints( void ) const;
	unsigned int	getAttackDamages( void ) const;
	unsigned int	getHitPoints( void ) const;


	ClapTrap	( void );
	~ClapTrap	( void );
	ClapTrap	( string name );
	ClapTrap	(const ClapTrap &obj);
	ClapTrap	&operator=(const ClapTrap &obj);
};

#endif