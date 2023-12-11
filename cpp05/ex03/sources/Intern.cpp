/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:04:52 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:50:16 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"

Intern::Intern	( void )
{
	std::cout << "Intern Default Constructor Called" << std::endl;
}

Intern::~Intern	( void )
{
	std::cout << "Intern Default Destructor Called" << std::endl;
}

Intern::Intern	( const Intern &obj )
{
	std::cout << "Intern Copy Constructor Called" << std::endl;
	*this = obj;
}

Intern	&Intern::operator=( const Intern &obj )
{
	std::cout << "Intern Copy Assignment Constructor Called" << std::endl;
	(void)obj;
	return (*this);
}

AForm *Intern::makeForm (const std::string &formName, const std::string &target) const
{
	std::string formNames[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	
	int i = 0;
	
	while (i < 3 && formNames[i] != formName)
		i++;
		
	AForm *tmp = NULL;
	switch( i )
	{
		case 0:
			return new ShrubberyCreationForm(target);
			break ;
		case 1:
			return new RobotomyRequestForm(target);
			break ;
		case 2:
			return new PresidentialPardonForm(target);
			break ;
		default:
			throw Intern::InvalidFormException();
	}
	std::cout << "Intern creates " << formName << std::endl;
	return tmp;
}