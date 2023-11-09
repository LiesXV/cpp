/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:35:56 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/08 16:20:08 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

# include "Weapon.hpp"

class HumanA {
	
public :

	~HumanA ( void );
	HumanA ( std::string name, Weapon &weapon );
	void	attack (void) ;

private :

	std::string	_name;
	Weapon	&	_weapon;

};

#endif