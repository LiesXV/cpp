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
		std::cout << "Makes some drilling noises" << std::endl;
		if (rand() < RAND_MAX / 2)
			std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
		else
			std::cout << "Robotomy on " << this->getTarget() << " has failed." << std::endl;
	}
}


///////////////////////////////////////////////////////
//						GETTERS					     //
///////////////////////////////////////////////////////


std::string const &	RobotomyRequestForm::getTarget ( void ) const
{
	return (this->_target);
}

///////////////////////////////////////////////////////
//					CONSTRUCTORS				     //
///////////////////////////////////////////////////////


RobotomyRequestForm::RobotomyRequestForm ( void ) 
	: AForm( "RobotomyRequestForm",  72, 45)
{
	std::cout << YELLOW << "RobotomyRequestForm Default Constructor Called ( Unnamed )" << END << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm ( const std::string &target ) 
	: AForm( "RobotomyRequestForm",  72, 45)
{
	std::cout << YELLOW << "RobotomyRequestForm Constructor Called" << END << std::endl;
	this->_target = target;
	return ;
}


RobotomyRequestForm::~RobotomyRequestForm ( void )
{
	std::cout << BLUE << "RobotomyRequestForm Destructor Called ( " << this->getName() << " )" << END << std::endl;
	return ;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(const RobotomyRequestForm &obj) 
{
	std::cout << YELLOW << "RobotomyRequestForm Copy Assignment Constructor Called ( " << obj.getName() << " )" << END << std::endl;
    this->AForm::operator=(obj);
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm ( const RobotomyRequestForm &obj )
	: AForm (obj)
{
	std::cout << YELLOW << "RobotomyRequestForm Copy Constructor Called ( " << obj.getName() << " )" << END << std::endl;
	return ;
}
