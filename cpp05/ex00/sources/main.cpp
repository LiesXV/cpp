/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:38:51 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/05 15:24:45 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main (void)
{
	
	cout << endl;
	
	try 	//	Tentative de création d'un Bureaucrat de grade 12.
	{ 
		Bureaucrat *jean;
		jean = new Bureaucrat( "Jean" , 12);	
		cout << jean->getName() << "'s grade is " << jean->getGrade() << endl;
		delete jean;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	cout << endl;
	
	try 	//	Tentative de création d'un Bureaucrat de grade 0.
	{ 
		Bureaucrat *bob;
		bob = new Bureaucrat( "Bobby" , 0);	
		cout << bob->getName() << "'s grade is " << bob->getGrade() << endl;
		cout << endl;
		delete bob;
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
	}
	cout << endl;
	
	try 	//	Tentative de création d'un Bureaucrat de grade 160.
	{ 
		Bureaucrat *marc;
		marc = new Bureaucrat( "Marc" , 160);	
		cout << marc->getName() << "'s grade is " << marc->getGrade() << endl;
		cout << endl;
		delete marc;
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
	}
	
	cout << endl;

	Bureaucrat *conny = new Bureaucrat( "Conny", 145 );

	try
	{
		for (int i = 0; i < 18; i++)
		{
			cout << conny->getName() << "'s grade is " << conny->getGrade() << endl;
			conny->decrementGrade();
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
	} 

	cout << endl;
	cout << conny->getName() << "'s grade is " << conny->getGrade() << endl;

	delete conny;

	cout << endl;
	Bureaucrat *eren = new Bureaucrat( "Eren", 8 );

	try
	{
		for (int i = 0; i < 18; i++)
		{
			cout << eren->getName() << "'s grade is " << eren->getGrade() << endl;
			eren->incrementGrade();
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
	} 

	cout << endl;
	cout << eren->getName() << "'s grade is " << eren->getGrade() << endl;

	delete eren;

	

	cout << endl;

	return 0;
}
