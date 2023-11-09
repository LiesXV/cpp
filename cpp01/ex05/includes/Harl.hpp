/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:29:09 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/09 16:05:35 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl {
	
private :

	void	_debug( void );
	void	_info( void );
	void	_warning( void );
	void	_error( void );
	std::string _level;
	
public :

	Harl( void );
	~Harl( void );
	Harl ( std::string level );
	
	void	complain( std::string level );
};