/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:29:52 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:50:16 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"


///////////////////////////////////////////////////////
//						FUNCTIONS				     //
///////////////////////////////////////////////////////


void	ShrubberyCreationForm::execute ( Bureaucrat const &executor )
{
	if (this->getSigningState() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
	{
		std::ofstream ofs((this->getTarget() + "_shrubbery").c_str());
		if (!ofs.is_open())
			throw std::ofstream::failure("Cannot open file.");
		ofs << "          .     .  .      +     .      .          ." << std::endl
		<< "     .       .      .     #       .           ." << std::endl
		<< "        .      .         ###            .      .      ." << std::endl
		<< "      .      .   \"#:. .:##\"##:. .:#\"  .      ." << std::endl
		<< "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl
		<< ".             \"#########\"#########\"        .        ." << std::endl
		<< "       .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl
		<< "    .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std::endl
		<< "               .\"##\"#####\"#####\"##\"           .      ." << std::endl
		<< "   .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl
		<< "    .     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl
		<< "  .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl
		<< "           .     \"      000      \"    .     ." << std::endl
		<< "      .         .   .   000     .        .       ." << std::endl
		<< ".. .. .................O000O........................ ......" << std::endl 
		<< "                HAPPY          CHRISTMAS                   "<< std::endl;
	}
}

///////////////////////////////////////////////////////
//						GETTERS					     //
///////////////////////////////////////////////////////


std::string const &	ShrubberyCreationForm::getTarget ( void ) const
{
	return (this->_target);
}


///////////////////////////////////////////////////////
//					CONSTRUCTORS				     //
///////////////////////////////////////////////////////


ShrubberyCreationForm::ShrubberyCreationForm ( void ) 
	: AForm( "ShrubberyCreationForm",  145, 137)
{
	std::cout << YELLOW << "ShrubberyCreationForm Default Constructor Called ( Unnamed )" << END << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm ( const std::string &target ) 
	: AForm( "ShrubberyCreationForm",  145, 137)
{
	std::cout << YELLOW << "ShrubberyCreationForm Default Constructor Called ( Unnamed )" << END << std::endl;
	this->_target = target;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm ( void )
{
	std::cout << BLUE << "ShrubberyCreationForm Destructor Called ( " << this->getName() << " )" << END << std::endl;
	return ;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj) 
{
	std::cout << YELLOW << "ShrubberyCreationForm Copy Assignment Constructor Called ( " << obj.getName() << " )" << END << std::endl;
    this->AForm::operator=(obj);
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm ( const ShrubberyCreationForm &obj )
	: AForm (obj)
{
	std::cout << YELLOW << "ShrubberyCreationForm Copy Constructor Called ( " << obj.getName() << " )" << END << std::endl;
	return ;
}
