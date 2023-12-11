/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:38:51 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:45:28 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main (void)
{
	srand(time(NULL));
	std::cout << std::endl;
	
	Bureaucrat *jean;
	jean = new Bureaucrat( "Jean" , 12);	
	std::cout << jean->getName() << "'s grade is " << jean->getGrade() << std::endl;
	
	std::cout << std::endl;
	Intern somePoorIntern;
	std::cout << std::endl;
	AForm *rrf;

	try
	{
		rrf = somePoorIntern.makeForm("lobotomy request", "target");
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << ", can't create this." << END << std::endl;
	}

	std::cout << std::endl;
	try
	{
		rrf = somePoorIntern.makeForm("robotomy request", "target");
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << ", can't create this." << END << std::endl;
	}
	std::cout << std::endl;

	jean->signAForm(*rrf);
	std::cout << std::endl;
	jean->executeForm(*rrf);

	
	std::cout << std::endl;
	delete rrf;
	delete jean;
	std::cout << std::endl;
	
}
