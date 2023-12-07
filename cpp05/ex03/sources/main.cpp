/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:38:51 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/07 19:28:15 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main (void)
{
	srand(time(NULL));
	cout << endl;
	
	Bureaucrat *jean;
	jean = new Bureaucrat( "Jean" , 12);	
	cout << jean->getName() << "'s grade is " << jean->getGrade() << endl;
	
	cout << endl;
	Intern somePoorIntern;
	cout << endl;
	AForm *rrf;

	try
	{
		rrf = somePoorIntern.makeForm("lobotomy request", "target");
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << ", can't create this." << END << endl;
	}

	cout << endl;
	try
	{
		rrf = somePoorIntern.makeForm("robotomy request", "target");
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << ", can't create this." << END << endl;
	}
	cout << endl;

	jean->signAForm(*rrf);
	cout << endl;
	jean->executeForm(*rrf);

	
	cout << endl;
	delete rrf;
	delete jean;
	cout << endl;
	
}
