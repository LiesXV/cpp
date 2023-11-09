/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:52:35 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/07 15:16:58 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"

Contact::Contact( void )
{
	return ;
}

Contact::~Contact ( void )
{
	return ;
}

int Contact::addContact ( void )
{
	while (1)
	{
		std::cout << "First Name : ";
		std::getline(std::cin, _fname);
		if (std::cin.eof())
			return (0);
		if (this->_testInfos(_fname) == 0)
			break ;
	}
	while (1)
	{
		std::cout << "Last Name : ";
		std::getline(std::cin, _lname);
		if (std::cin.eof())
			return (0);
		if (this->_testInfos(_lname) == 0)
			break ;
	}
	while (1)
	{
		std::cout << "Nickname : ";
		std::getline(std::cin, _nname);
		if (std::cin.eof())
			return (0);
		if (this->_testInfos(_nname) == 0)
			break ;
	}
	this->_testNumber();
	while (1)
	{
		std::cout << "Darkest Secret : ";
		std::getline(std::cin, _secret);
		if (std::cin.eof())
			return (0);
		if (this->_testInfos(_secret) == 0)
			break ;
	}
	if (std::cin.eof())
		return (0);
	return (1);
}

int	Contact::_testNumber ( void )
{
	std::cout << "Phone Number : ";
	std::getline(std::cin, _number);
	if (std::cin.eof())
		exit(1);
	if (_number.size() != 10)
	{
		std::cout << "Your Phone Number should contain 10 digits." << std::endl;
		return (this->_testNumber());
	}
	for ( std::string::iterator it=_number.begin(); it!=_number.end(); ++it)
	{
		if (*it < '0' || *it > '9')
		{
			std::cout << "Your Phone Number should contain only digits." << std::endl;
			return (this->_testNumber());
		}
	}
	return (0);
}

int	Contact::_testInfos ( std::string str )
{
	if (str.size() < 1)
	{
		std::cout << "It can't stay blank." << std::endl;
		return (1);
	}
	for ( std::string::iterator it=str.begin(); it!=str.end(); ++it)
	{
		if (!(*it >= 'a' && *it <= 'z') && !(*it >= 'A' && *it <= 'Z'))
		{
			std::cout << "It should contain only letters." << std::endl;
			return (1);
		}
	}
	return (0);
}

void	Contact::displayResume (void) const
{
	std::cout << std::setw(10) << _parseInfo(this->_fname) << "|";
	std::cout << std::setw(10) << _parseInfo(this->_lname) << "|";
	std::cout << std::setw(10) << _parseInfo(this->_nname) << "|";
	std::cout << std::endl;
	return ;
}

std::string	Contact::_parseInfo(std::string str) const
{
	if (str.empty() == true)
		return (" - ");
	else if (str.size() > 10)
		return (str.substr(0, 9) + '.');
	else
		return (str);
}

void Contact::printContact ( void ) const
{
	if (this->_fname.empty() == true)
	{
		std::cout << "This Contact does not exist" << std::endl;
		return ;
	}
	std::cout << "First Name: \t" << this->_fname << std::endl;
	std::cout << "Last Name: \t" << this->_lname << std::endl;
	std::cout << "Nickname: \t" << this->_nname << std::endl;
	std::cout << "Number: \t" << this->_number << std::endl;
	std::cout << this->_secret << std::endl;
}