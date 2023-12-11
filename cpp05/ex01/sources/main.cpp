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
	std::cout << std::endl;
	
	try 	//	Tentative de création d'un Formulaire de grade 0.
	{
		Form contract1 = Form( "Inscription's form" , 0, 24);	
		std::cout << contract1 << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
	}
	std::cout << std::endl;
	
	try 	//	Tentative de création d'un Formulaire de grade to sign 164.
	{ 
		Form contract2 = Form( "Exclusion's form" , 164, 21);	
		std::cout << contract2 << std::endl;
		std::cout << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
	}
	std::cout << std::endl;
	
	Bureaucrat *jean;
	jean = new Bureaucrat( "Jean" , 24);	
	std::cout << jean->getName() << "'s grade is " << jean->getGrade() << std::endl;
	
	std::cout << std::endl;

	Form *contract;
	contract = new Form( "Resiliation's Form" , 20, 10);	
	std::cout << *contract << std::endl;

	for (int i = 0; i < 6; i++)
	{
		std::cout << "Jean's Grade : " << jean->getGrade() << std::endl;
		try
		{
			jean->signForm( *contract );
		std::cout << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << RED << e.what() << END << std::endl;
		}
		jean->incrementGrade();
	}	

	delete jean;
	delete contract;
	
	std::cout << std::endl;
	return 0;
}
