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
		cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;

	}
}


///////////////////////////////////////////////////////
//						GETTERS					     //
///////////////////////////////////////////////////////


string const &	PresidentialPardonForm::getTarget ( void ) const
{
	return (this->_target);
}

///////////////////////////////////////////////////////
//					CONSTRUCTORS				     //
///////////////////////////////////////////////////////


PresidentialPardonForm::PresidentialPardonForm ( void ) 
	: AForm( "PresidentialPardonForm",  25, 5)
{
	cout << YELLOW << "PresidentialPardonForm Default Constructor Called ( Unnamed )" << END << endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm ( const string &target ) 
	: AForm( "PresidentialPardonForm",  25, 5)
{
	cout << YELLOW << "PresidentialPardonForm Constructor Called" << END << endl;
	this->_target = target;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm ( void )
{
	cout << BLUE << "PresidentialPardonForm Destructor Called ( " << this->getName() << " )" << END << endl;
	return ;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(const PresidentialPardonForm &obj) 
{
	cout << YELLOW << "PresidentialPardonForm Copy Assignment Constructor Called ( " << obj.getName() << " )" << END << endl;
    this->AForm::operator=(obj);
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm ( const PresidentialPardonForm &obj )
	: AForm (obj)
{
	cout << YELLOW << "PresidentialPardonForm Copy Constructor Called ( " << obj.getName() << " )" << END << endl;
	return ;
}
