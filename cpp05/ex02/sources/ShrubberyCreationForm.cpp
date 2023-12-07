/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:29:52 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/07 16:33:49 by ibenhaim         ###   ########.fr       */
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
		ofs << "          .     .  .      +     .      .          ." << endl
		<< "     .       .      .     #       .           ." << endl
		<< "        .      .         ###            .      .      ." << endl
		<< "      .      .   \"#:. .:##\"##:. .:#\"  .      ." << endl
		<< "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << endl
		<< ".             \"#########\"#########\"        .        ." << endl
		<< "       .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << endl
		<< "    .     .  \"#######\"\"##\"##\"\"#######\"                  ." << endl
		<< "               .\"##\"#####\"#####\"##\"           .      ." << endl
		<< "   .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << endl
		<< "    .     \"#######\"##\"#####\"##\"#######\"      .     ." << endl
		<< "  .    .     \"#####\"\"#######\"\"#####\"    .      ." << endl
		<< "           .     \"      000      \"    .     ." << endl
		<< "      .         .   .   000     .        .       ." << endl
		<< ".. .. .................O000O........................ ......" << endl 
		<< "                HAPPY          CHRISTMAS                   "<< endl;
	}
}

///////////////////////////////////////////////////////
//						GETTERS					     //
///////////////////////////////////////////////////////


string const &	ShrubberyCreationForm::getTarget ( void ) const
{
	return (this->_target);
}


///////////////////////////////////////////////////////
//					CONSTRUCTORS				     //
///////////////////////////////////////////////////////


ShrubberyCreationForm::ShrubberyCreationForm ( void ) 
	: AForm( "ShrubberyCreationForm",  145, 137)
{
	cout << YELLOW << "ShrubberyCreationForm Default Constructor Called ( Unnamed )" << END << endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm ( const string &target ) 
	: AForm( "ShrubberyCreationForm",  145, 137)
{
	cout << YELLOW << "ShrubberyCreationForm Default Constructor Called ( Unnamed )" << END << endl;
	this->_target = target;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm ( void )
{
	cout << BLUE << "ShrubberyCreationForm Destructor Called ( " << this->getName() << " )" << END << endl;
	return ;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj) 
{
	cout << YELLOW << "ShrubberyCreationForm Copy Assignment Constructor Called ( " << obj.getName() << " )" << END << endl;
    this->AForm::operator=(obj);
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm ( const ShrubberyCreationForm &obj )
	: AForm (obj)
{
	cout << YELLOW << "ShrubberyCreationForm Copy Constructor Called ( " << obj.getName() << " )" << END << endl;
	return ;
}
