/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:24:27 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/05 17:13:27 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

///////////////////////////////////////////////////////
//						FUNCTIONS					 //
///////////////////////////////////////////////////////

void	Bureaucrat::incrementGrade ( void )
{
	if (this->getGrade() == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade ( void )
{
	if (this->getGrade() == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

void	Bureaucrat::signForm ( Form &form ) const
{
	try
	{
		form.beSigned(*this);
		cout << GREEN << this->getName() << " signed " << form.getName() << END << endl << form << endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << " " << this->getName() << " can't sign this." << END << endl;
	}
}

///////////////////////////////////////////////////////
//						GETTERS					     //
///////////////////////////////////////////////////////

string const &	Bureaucrat::getName( void ) const
{
	return (this->_name);
}

unsigned int Bureaucrat::getGrade ( void ) const
{
	return (this->_grade);	
}

///////////////////////////////////////////////////////
//					CONSTRUCTORS				     //
///////////////////////////////////////////////////////

Bureaucrat::Bureaucrat ( void )
{
	cout << YELLOW << "Bureaucrat Default Constructor Called ( Unnamed )" << END << endl;
	this->_name = "Unnamed Bureaucrat";
	this->_grade = 150;	
	return ;
}

Bureaucrat::~Bureaucrat ( void )
{
	cout << BLUE << "Bureaucrat Destructor Called ( " << this->getName() << " )" << END << endl;
	return ;
}

Bureaucrat::Bureaucrat ( string const name, unsigned int grade )
{
	cout << YELLOW << "Bureaucrat Named Constructor Called ( " << name << " )" << END << endl;
	this->_name = name;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat ( const Bureaucrat &obj )
{
	cout << YELLOW << "Bureaucrat Copy Constructor Called ( " << obj.getName() << " )" << END << endl;
	*this = obj; 
	return ;
}

Bureaucrat &	Bureaucrat::operator=(const Bureaucrat &obj) 
{
	this->_grade = obj.getGrade();
	this->_name	= obj.getName ();
	return (*this);
}