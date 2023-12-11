/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:57:09 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:50:16 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"


std::ostream &operator<<(std::ostream &os, const Form &obj)
{
	os	<< "Form name : " << obj.getName() << std::endl
		<< "Grade to sign : " << obj.getGradeToSign() << std::endl
		<< "Grade to execute : " << obj.getGradeToExecute() << std::endl
		<< "Status  :  ";
	if (obj.getSigningState() == true)
		os << "Form Signed" << std::endl;
	else
		os << "Pending signature" << std::endl;
	return (os);
}


///////////////////////////////////////////////////////
//						FUNCTIONS					 //
///////////////////////////////////////////////////////


void	Form::beSigned ( const Bureaucrat &obj )
{
	if (obj.getGrade() > this->getGradeToSign())
		throw Form::GradeTooLowException();
	else if (this->getSigningState() == true)
		throw Form::AlreadySignedException();
	else
		this->_isSigned = true;
}


///////////////////////////////////////////////////////
//						GETTERS					     //
///////////////////////////////////////////////////////


std::string const &	Form::getName ( void ) const
{
	return (this->_name);
}

unsigned int	Form::getGradeToSign ( void ) const
{
	return (this->_gradeToSign);	
}

unsigned int	Form::getGradeToExecute ( void ) const
{
	return (this->_gradeToExecute);	
}

bool			Form::getSigningState ( void ) const
{
	return (this->_isSigned);
}


///////////////////////////////////////////////////////
//					CONSTRUCTORS				     //
///////////////////////////////////////////////////////


Form::Form ( void ) 
	: _name("Unnamed Form"), _isSigned(false),  _gradeToSign(150) , _gradeToExecute(150)
{
	std::cout << YELLOW << "Form Default Constructor Called ( Unnamed )" << END << std::endl;
	return ;
}

Form::~Form ( void )
{
	std::cout << BLUE << "Form Destructor Called ( " << this->getName() << " )" << END << std::endl;
	return ;
}

Form::Form ( std::string const name , unsigned int gradeToSign, unsigned int gradeToExecute ) 
	: _name(name), _isSigned(false), _gradeToSign(gradeToSign) , _gradeToExecute(gradeToExecute)
{
	std::cout << YELLOW << "Form Named Constructor Called ( " << name << " )" << END << std::endl;
	
	if (gradeToSign > 150)
		throw Form::GradeTooLowException();
	else if (gradeToSign < 1)
		throw Form::GradeTooHighException();

	if (gradeToExecute > 150)
		throw Form::GradeTooLowException();
	else if (gradeToExecute < 1)
		throw Form::GradeTooHighException();
		
	return ;
}

Form &	Form::operator=(const Form &obj) 
{
	std::cout << YELLOW << "Form Copy Assignment Constructor Called ( " << obj.getName() << " )" << END << std::endl;
    this->_isSigned = obj.getSigningState();
	return (*this);
}

Form::Form ( const Form &obj )
	: _name(obj.getName()),  _isSigned(obj.getSigningState()), _gradeToSign(obj.getGradeToSign()) , _gradeToExecute(obj.getGradeToExecute())
{
	std::cout << YELLOW << "Form Copy Constructor Called ( " << obj.getName() << " )" << END << std::endl;
	return ;
}
