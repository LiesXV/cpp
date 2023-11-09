/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:46:22 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/08 13:46:53 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string Zombie = "HI THIS IS BRAIN";
	std::string* stringPTR = &Zombie;
	std::string& stringREF = Zombie;
	std::cout << "====== ADDRESS ======" << std::endl;
	std::cout << "Zombie    : " << &Zombie << std::endl;
	std::cout << "stringPTR : " << stringPTR << std::endl;
	std::cout << "stringREF : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "====== VARIABLES ======" << std::endl;
	std::cout << "Zombie    : " << Zombie << std::endl;
	std::cout << "stringPTR : " << *stringPTR << std::endl;
	std::cout << "stringREF : " << stringREF << std::endl;
	return (0);
}