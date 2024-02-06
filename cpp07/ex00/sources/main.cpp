/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:10:16 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/01/04 14:09:52 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/whatever.hpp"
#include <iostream>

# define RESET		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"

int main(void)
{
	int a = 15;
	int b = 24;

	std::cout << std::endl << GREEN << "a is \"" << a << "\"" << RESET << std::endl;
	std::cout << BLUE << "b is \"" << b << "\"" << RESET << std::endl << std::endl;
	
	std::cout << "highest int is \"" << ::max(a, b) << "\"" << std::endl;
	std::cout << "lowest int is \"" << ::min<int>(a, b) << "\"" << std::endl << std::endl;

	::swap(a, b);
	
	std::cout << GREEN << "a is now \"" << a << "\"" << RESET << std::endl;
	std::cout << BLUE << "b is now \"" << b << "\"" << RESET << std::endl << std::endl << "-----------------" << std::endl << std::endl;

	char c = 'G';
	char d = 'Y';

	std::cout << GREEN << "c is \"" << c << "\"" << RESET << std::endl;
	std::cout << BLUE << "d is \"" << d << "\"" << RESET << std::endl << std::endl;
	
	std::cout << "highest char is \"" << ::max(c, d) << "\"" << std::endl;
	std::cout << "lowest char is \"" << ::min<char>(c, d) << "\"" << std::endl << std::endl;

	::swap(c, d);
	
	std::cout << GREEN << "c is now \"" << c << "\"" << RESET << std::endl;
	std::cout << BLUE << "d is now \"" << d << "\"" << RESET << std::endl << std::endl << "-----------------" << std::endl << std::endl;

	std::string e = "bonjourni";
	std::string f = "bonjourno";

	std::cout << GREEN << "e is \"" << e << "\"" << RESET << std::endl;
	std::cout << BLUE << "f is \"" << f << "\"" << RESET << std::endl << std::endl;
	
	std::cout << "highest string is \"" << ::max(e, f) << "\"" << std::endl;
	std::cout << "lowest string is \"" << ::min<std::string>(e, f) << "\"" << std::endl << std::endl;
	
	::swap(e, f);
	
	std::cout << GREEN << "e is now \"" << e << "\"" << RESET << std::endl;
	std::cout << BLUE << "f is now \"" << f << "\"" << RESET << std::endl << std::endl << std::endl;
}