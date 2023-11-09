/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:52:16 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/08 16:19:27 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class Weapon {
	
public :

	~Weapon ( void );
	Weapon ( std::string weapon );
	void setType ( std::string const & newType );
	std::string const & getType(void);

private :

	std::string	_type;

};

#endif