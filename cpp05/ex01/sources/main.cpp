/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:38:51 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/05 18:23:44 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main (void)
{
	cout << endl;
	
	try 	//	Tentative de création d'un Formulaire de grade 0.
	{
		Form contract1 = Form( "Inscription's form" , 0, 24);	
		cout << contract1 << endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
	}
	cout << endl;
	
	try 	//	Tentative de création d'un Formulaire de grade to sign 164.
	{ 
		Form contract2 = Form( "Exclusion's form" , 164, 21);	
		cout << contract2 << endl;
		cout << endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << END << std::endl;
	}
	cout << endl;
	
	Bureaucrat *jean;
	jean = new Bureaucrat( "Jean" , 24);	
	cout << jean->getName() << "'s grade is " << jean->getGrade() << endl;
	
	cout << endl;

	Form *contract;
	contract = new Form( "Resiliation's Form" , 20, 10);	
	cout << *contract << endl;

	for (int i = 0; i < 6; i++)
	{
		cout << "Jean's Grade : " << jean->getGrade() << endl;
		try
		{
			jean->signForm( *contract );
		cout << endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << RED << e.what() << END << std::endl;
		}
		jean->incrementGrade();
	}	

	delete jean;
	delete contract;
	
	cout << endl;
	return 0;
}
