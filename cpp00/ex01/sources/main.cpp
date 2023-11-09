/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:27:14 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/07 15:04:54 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/PhoneBook.hpp"

int main()
{
	PhoneBook repertoire;
	std::string	prompt;

	while (prompt.compare("EXIT"))
	{
		std::cout << " > ";
		std::getline(std::cin, prompt);
		if (std::cin.eof())
			break ;
		if (!prompt.compare("ADD"))
			repertoire.addContact();
		if (!prompt.compare("SEARCH"))
			repertoire.searchContact();
	}
	return (0);
}