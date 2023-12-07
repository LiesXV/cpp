/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:38:51 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/07 18:44:11 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main (void)
{
	srand(time(NULL));
	cout << endl;
	
	Bureaucrat *jean;
	jean = new Bureaucrat( "Jean" , 146);	
	cout << jean->getName() << "'s grade is " << jean->getGrade() << endl;
	
	cout << endl;

	AForm *shrubbery;
	shrubbery = new ShrubberyCreationForm( "Target" );	
	cout << *shrubbery << endl;

	jean->executeForm(*shrubbery);
	cout << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << "Jean's Grade : " << jean->getGrade() << endl;
		try
		{
			jean->signAForm( *shrubbery );
			cout << endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << RED << e.what() << END << std::endl;
		}
		jean->incrementGrade();
	}	

	for (int i = 0; i < 10; i++)
	{
		jean->incrementGrade();
	}	

	jean->executeForm(*shrubbery);
	cout << endl;

	for (int i = 0; i < 60; i++)
	{
		jean->incrementGrade();
	}

	AForm *robotomy;
	robotomy = new RobotomyRequestForm( "Target" );	
	cout << *robotomy << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << "Jean's Grade : " << jean->getGrade() << endl;
		try
		{
			jean->signAForm( *robotomy );
			cout << endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << RED << e.what() << END << std::endl;
		}
		jean->incrementGrade();
	}

	for (int i = 0; i < 44; i++)
	{
		jean->incrementGrade();
	}
	
	cout << endl;
	
	for (int i = 0; i < 5; i++)
	{
		jean->executeForm(*robotomy);
		cout << endl;
	}

	
	cout << endl;
	AForm *pardon;
	pardon = new PresidentialPardonForm( "Target" );	
	cout << *pardon << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << "Jean's Grade : " << jean->getGrade() << endl;
		try
		{
			jean->signAForm( *pardon );
			cout << endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << RED << e.what() << END << std::endl;
		}
		jean->incrementGrade();
	}	

	for (int i = 0; i < 20; i++)
	{
		jean->incrementGrade();
	}

	jean->executeForm(*pardon);
	
	cout << endl;
	delete shrubbery;
	delete robotomy;
	delete pardon;
	delete jean;
	cout << endl;
	return 0;
}
