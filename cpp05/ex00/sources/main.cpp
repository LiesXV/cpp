/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:38:51 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/01/02 09:48:13 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main (void)
{
	
	std::cout << std::endl;
	
	try 	//	Tentative de création d'un Bureaucrat de grade 12.
	{ 
		Bureaucrat *jean;
		jean = new Bureaucrat( "Jean" , 12);	
		std::cout << jean->getName() << "'s grade is " << jean->getGrade() << std::endl;
		delete jean;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	













	try 	//	Tentative de création d'un Bureaucrat de grade 0.
	{ 
		Bureaucrat *bob;
		bob = new Bureaucrat( "Bobby" , 0);	
		std::cout << bob->getName() << "'s grade is " << bob->getGrade() << std::endl;
		std::cout << std::endl;
		delete bob;
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
	}
	std::cout << std::endl;
	

















	
	try 	//	Tentative de création d'un Bureaucrat de grade 160.
	{ 
		Bureaucrat *marc;
		marc = new Bureaucrat( "Marc" , 160);	
		std::cout << marc->getName() << "'s grade is " << marc->getGrade() << std::endl;
		std::cout << std::endl;
		delete marc;
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
	}
	
	std::cout << std::endl;

	Bureaucrat *conny = new Bureaucrat( "Conny", 145 );

	try
	{
		for (int i = 0; i < 18; i++)
		{
			std::cout << conny->getName() << "'s grade is " << conny->getGrade() << std::endl;
			conny->decrementGrade();
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
	} 

	std::cout << std::endl;
	std::cout << conny->getName() << "'s grade is " << conny->getGrade() << std::endl;

	delete conny;

	std::cout << std::endl;
	Bureaucrat *eren = new Bureaucrat( "Eren", 8 );

	try
	{
		for (int i = 0; i < 18; i++)
		{
			std::cout << eren->getName() << "'s grade is " << eren->getGrade() << std::endl;
			eren->incrementGrade();
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
	} 

	std::cout << std::endl;
	std::cout << eren->getName() << "'s grade is " << eren->getGrade() << std::endl;

	delete eren;

	

	std::cout << std::endl;

	return 0;
}
