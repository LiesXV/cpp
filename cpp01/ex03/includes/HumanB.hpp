/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:35:56 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/08 16:18:55 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

# include "Weapon.hpp"

class HumanB {
	
public :

	~HumanB ( void );
	HumanB ( std::string name );
	void	setWeapon(Weapon & weapon);
	void	attack (void) ;

private :

	std::string	_name;
	Weapon	*	_weapon;

};

#endif