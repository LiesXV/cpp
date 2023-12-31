/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:57:09 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/05 16:47:40 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"


std::ostream &operator<<(std::ostream &os, const AForm &obj)
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


void	AForm::beSigned ( const Bureaucrat &obj )
{
	if (obj.getGrade() > this->getGradeToSign())
		throw AForm::GradeTooLowException();
	else if (this->getSigningState() == true)
		throw AForm::AlreadySignedException();
	else
		this->_isSigned = true;
}

///////////////////////////////////////////////////////
//						GETTERS					     //
///////////////////////////////////////////////////////


std::string const &	AForm::getName ( void ) const
{
	return (this->_name);
}

unsigned int	AForm::getGradeToSign ( void ) const
{
	return (this->_gradeToSign);	
}

unsigned int	AForm::getGradeToExecute ( void ) const
{
	return (this->_gradeToExecute);	
}

bool			AForm::getSigningState ( void ) const
{
	return (this->_isSigned);
}


///////////////////////////////////////////////////////
//					CONSTRUCTORS				     //
///////////////////////////////////////////////////////


AForm::AForm ( void ) 
	: _name("Unnamed Form"), _isSigned(false),  _gradeToSign(150) , _gradeToExecute(150)
{
	std::cout << YELLOW << "AForm Default Constructor Called ( Unnamed )" << END << std::endl;
	return ;
}

AForm::~AForm ( void )
{
	std::cout << BLUE << "Form Destructor Called ( " << this->getName() << " )" << END << std::endl;
	return ;
}

AForm::AForm ( std::string const name , unsigned int gradeToSign, unsigned int gradeToExecute ) 
	: _name(name), _isSigned(false), _gradeToSign(gradeToSign) , _gradeToExecute(gradeToExecute)
{
	std::cout << YELLOW << "AForm Named Constructor Called ( " << name << " )" << END << std::endl;
	
	if (gradeToSign > 150)
		throw AForm::GradeTooLowException();
	else if (gradeToSign < 1)
		throw AForm::GradeTooHighException();

	if (gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	else if (gradeToExecute < 1)
		throw AForm::GradeTooHighException();
		
	return ;
}

AForm &	AForm::operator=(const AForm &obj) 
{
	std::cout << YELLOW << "AForm Copy Assignment Constructor Called ( " << obj.getName() << " )" << END << std::endl;
    this->_isSigned = obj.getSigningState();
	return (*this);
}

AForm::AForm ( const AForm &obj )
	: _name(obj.getName()),  _isSigned(obj.getSigningState()), _gradeToSign(obj.getGradeToSign()) , _gradeToExecute(obj.getGradeToExecute())
{
	std::cout << YELLOW << "AForm Copy Constructor Called ( " << obj.getName() << " )" << END << std::endl;
	return ;
}
