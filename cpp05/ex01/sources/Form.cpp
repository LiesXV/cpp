/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:57:09 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/04 19:16:33 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"

///////////////////////////////////////////////////////
//						GETTERS					     //
///////////////////////////////////////////////////////

string const &	Bureaucrat::getName ( void ) const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGradeToSign ( void ) const
{
	return (this->_gradeToSign);	
}

unsigned int	Bureaucrat::getGradeToExecute ( void ) const
{
	return (this->_gradeToExecute);	
}

bool			Bureaucrat::getSigningState ( void ) const
{
	return (this->_isSigned);
}

///////////////////////////////////////////////////////
//					CONSTRUCTORS				     //
///////////////////////////////////////////////////////

Form::Form ( void )
{
	cout << YELLOW << "Form Default Constructor Called ( Unnamed )" << END << endl;
	this->_name = "Unnamed Form";
	this->_isSigned = false;
	this->_gradeToSign = 150;
	this->_gradeToExecute = 150;
	return ;
}

Form::~Form ( void )
{
	cout << BLUE << "Form Destructor Called ( " << this->getName() << " )" << END << endl;
	return ;
}

Form::Form ( string const name , unsigned int gradeToSign, unsigned int gradeToExecute )
{
	cout << YELLOW << "Form Named Constructor Called ( " << name << " )" << END << endl;
	this->_name = name;
	if (gradeToSign > 150)
		throw Form::GradeTooLowException();
	else if (gradeToSign < 1)
		throw Form::GradeTooHighException();
	else
		this->_gradeToSign = gradeToSign;
	if (gradeToExecute > 150)
		throw Form::GradeTooLowException();
	else if (gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else
		this->_gradeToExecute = gradeToExecute;
	this->_isSigned = false;
	return ;
}


Form &	Form::operator=(const Form &obj) 
{
	this->_name = obj.getName();
	this->_isSigned = obj.getSigningState();
	this->_gradeToSign = obj.getGradeToSign();
	this->_gradeToExecute = obj.getGradeToExecute();
	return (*this);
}

Form::Form ( const Form &obj )
{
	cout << YELLOW << "Form Copy Constructor Called ( " << obj->getName() << " )" << END << endl;
	*this = obj;
	return ;
}