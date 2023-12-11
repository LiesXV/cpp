/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:38:51 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:51:04 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main (void)
{
	srand(time(NULL));
	std::cout << std::endl;
	
	Bureaucrat *jean;
	jean = new Bureaucrat( "Jean" , 146);	
	std::cout << jean->getName() << "'s grade is " << jean->getGrade() << std::endl;
	
	std::cout << std::endl;

	AForm *shrubbery;
	shrubbery = new ShrubberyCreationForm( "Target" );	
	std::cout << *shrubbery << std::endl;

	jean->executeForm(*shrubbery);
	std::cout << std::endl;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Jean's Grade : " << jean->getGrade() << std::endl;
		try
		{
			jean->signAForm( *shrubbery );
			std::cout << std::endl;
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
	std::cout << std::endl;

	for (int i = 0; i < 60; i++)
	{
		jean->incrementGrade();
	}

	AForm *robotomy;
	robotomy = new RobotomyRequestForm( "Target" );	
	std::cout << *robotomy << std::endl;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Jean's Grade : " << jean->getGrade() << std::endl;
		try
		{
			jean->signAForm( *robotomy );
			std::cout << std::endl;
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
	
	std::cout << std::endl;
	
	for (int i = 0; i < 5; i++)
	{
		jean->executeForm(*robotomy);
		std::cout << std::endl;
	}

	
	std::cout << std::endl;
	AForm *pardon;
	pardon = new PresidentialPardonForm( "Target" );	
	std::cout << *pardon << std::endl;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Jean's Grade : " << jean->getGrade() << std::endl;
		try
		{
			jean->signAForm( *pardon );
			std::cout << std::endl;
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
	
	std::cout << std::endl;
	delete shrubbery;
	delete robotomy;
	delete pardon;
	delete jean;
	std::cout << std::endl;
	return 0;
}
