/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
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


void	RobotomyRequestForm::execute ( Bureaucrat const &executor )
{
	if (this->getSigningState() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
	{
		cout << "Makes some drilling noises" << endl;
		if (rand() < RAND_MAX / 2)
			cout << this->getTarget() << " has been robotomized successfully." << endl;
		else
			cout << "Robotomy on " << this->getTarget() << " has failed." << endl;
	}
}


///////////////////////////////////////////////////////
//						GETTERS					     //
///////////////////////////////////////////////////////


string const &	RobotomyRequestForm::getTarget ( void ) const
{
	return (this->_target);
}

///////////////////////////////////////////////////////
//					CONSTRUCTORS				     //
///////////////////////////////////////////////////////


RobotomyRequestForm::RobotomyRequestForm ( void ) 
	: AForm( "RobotomyRequestForm",  72, 45)
{
	cout << YELLOW << "RobotomyRequestForm Default Constructor Called ( Unnamed )" << END << endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm ( const string &target ) 
	: AForm( "RobotomyRequestForm",  72, 45)
{
	cout << YELLOW << "RobotomyRequestForm Constructor Called" << END << endl;
	this->_target = target;
	return ;
}


RobotomyRequestForm::~RobotomyRequestForm ( void )
{
	cout << BLUE << "RobotomyRequestForm Destructor Called ( " << this->getName() << " )" << END << endl;
	return ;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(const RobotomyRequestForm &obj) 
{
	cout << YELLOW << "RobotomyRequestForm Copy Assignment Constructor Called ( " << obj.getName() << " )" << END << endl;
    this->AForm::operator=(obj);
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm ( const RobotomyRequestForm &obj )
	: AForm (obj)
{
	cout << YELLOW << "RobotomyRequestForm Copy Constructor Called ( " << obj.getName() << " )" << END << endl;
	return ;
}
