/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:11:30 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/22 19:52:17 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

using std::cout;
using std::endl;
using std::string;

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
	unsigned int	getEnergyPoint( void ) const;
	unsigned int	getAttackDamages( void ) const;
	unsigned int	getHitPoints( void ) const;


	ClapTrap( void );
	~ClapTrap( void );
	ClapTrap( string name );
};

#endif