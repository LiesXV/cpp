/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:04:52 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/07 19:26:25 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"

Intern::Intern	( void )
{
	cout << "Intern Default Constructor Called" << endl;
}

Intern::~Intern	( void )
{
	cout << "Intern Default Destructor Called" << endl;
}

Intern::Intern	( const Intern &obj )
{
	cout << "Intern Copy Constructor Called" << endl;
	*this = obj;
}

Intern	&Intern::operator=( const Intern &obj )
{
	cout << "Intern Copy Assignment Constructor Called" << endl;
	(void)obj;
	return (*this);
}

AForm *Intern::makeForm (const string &formName, const string &target) const
{
	string formNames[3] = {
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
	cout << "Intern creates " << formName << endl;
	return tmp;
}