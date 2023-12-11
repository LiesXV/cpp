/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:29:52 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/05 19:19:49 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"


///////////////////////////////////////////////////////
//						FUNCTIONS				     //
///////////////////////////////////////////////////////


void	PresidentialPardonForm::execute ( Bureaucrat const &executor )
{
	if (this->getSigningState() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
	{
		std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;

	}
}


///////////////////////////////////////////////////////
//						GETTERS					     //
///////////////////////////////////////////////////////


std::string const &	PresidentialPardonForm::getTarget ( void ) const
{
	return (this->_target);
}

///////////////////////////////////////////////////////
//					CONSTRUCTORS				     //
///////////////////////////////////////////////////////


PresidentialPardonForm::PresidentialPardonForm ( void ) 
	: AForm( "PresidentialPardonForm",  25, 5)
{
	std::cout << YELLOW << "PresidentialPardonForm Default Constructor Called ( Unnamed )" << END << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm ( const std::string &target ) 
	: AForm( "PresidentialPardonForm",  25, 5)
{
	std::cout << YELLOW << "PresidentialPardonForm Constructor Called" << END << std::endl;
	this->_target = target;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm ( void )
{
	std::cout << BLUE << "PresidentialPardonForm Destructor Called ( " << this->getName() << " )" << END << std::endl;
	return ;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(const PresidentialPardonForm &obj) 
{
	std::cout << YELLOW << "PresidentialPardonForm Copy Assignment Constructor Called ( " << obj.getName() << " )" << END << std::endl;
    this->AForm::operator=(obj);
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm ( const PresidentialPardonForm &obj )
	: AForm (obj)
{
	std::cout << YELLOW << "PresidentialPardonForm Copy Constructor Called ( " << obj.getName() << " )" << END << std::endl;
	return ;
}
