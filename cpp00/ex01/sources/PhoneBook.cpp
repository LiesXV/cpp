/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:52:33 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/08 10:27:27 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {
	// std::cout << "Phonebook Constructor Called" << std::endl;
	this->_contacts = 0;
	return ;
}

PhoneBook::~PhoneBook( void ) {
	// std::cout << "Phonebook Destructor Called" << std::endl;
	return ;
}

void	PhoneBook::addContact( void ) {

	if (this->_seeContacts() >= 8)
		this->_contacts = 0;
	this->_contacts += repertoire[this->_seeContacts()].addContact();
	std::cout << this->_seeContacts() << " contacts." << std::endl;
	return ;
}

void	PhoneBook::searchContact( void )
{
	std::string	prompt;
	std::string	str;
	
	str.append(50u,'-');
	std::cout << std::setw(32) << "Lyessou's PhoneBook";
	std::cout << std::endl;
	std::cout << std::setw(50) << str;
	std::cout << std::endl;
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Full Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|";
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		repertoire[i].displayResume();
	}
	std::cout << "Choose a contact : ";
	std::getline(std::cin, prompt);
	if (std::cin.eof())
		return ;
	if (prompt[0] >= '1' && prompt[0] <= '8' && prompt.size() == 1)
		this->repertoire[prompt[0] - 49].printContact();
	
}

int	PhoneBook::_seeContacts( void ) const {
	return (this->_contacts);
}