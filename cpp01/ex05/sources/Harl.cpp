/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:21:37 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/09 16:07:10 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl ( void ) {
	std::cout << "Constructor was called" << std::endl;
	return ;
}

Harl::~Harl ( void ) {
	std::cout << "Destructor was called" << std::endl;
	return ;
}

Harl::Harl ( std::string level ) : _level(level) {
	
	std::cout << "Constructor was called" << std::endl;
	complain(level);
	return ;
}

void	Harl::complain ( std::string level ) {
	
	std::string	array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	void (Harl::*message[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	
	for (int i = 0; i < 4; i++)
	{
		if (level.compare(array[i]) == 0)
		{
			(this->*message[i])();
			break ;
		}
	}
	
}





void	Harl::_debug ( void ) {
	
	std::cout << "[DEBUG] Here is a debug message." << std::endl;
}

void	Harl::_info ( void ) {
	
	std::cout << "[INFO] Here is an info message." << std::endl;
}

void	Harl::_warning ( void ) {
	
	std::cout << "[WARNING] Here is a warning message." << std::endl;
}

void	Harl::_error ( void ) {
	
	std::cout << "[ERROR] Here is an error message." << std::endl;
}