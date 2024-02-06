/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:10:16 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/01/04 16:11:54 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"
#include <locale>
#include <iostream>
#include <string>

void print_to_lower(const std::string& str)
{
	std::locale loc;
	
	std::cout << "\t";
	for (std::string::size_type i=0; i<str.length(); ++i)
		std::cout << std::tolower(str[i],loc);
	std::cout << std::endl;
}

void print_to_upper(const std::string& str)
{
	std::locale loc;
	
	std::cout << "\t";
	for (std::string::size_type i=0; i<str.length(); ++i)
		std::cout << std::toupper(str[i],loc);
	std::cout << std::endl;
}

int main()
{
	std::string strings[] = {"One", "Two", "Three", "Four"};

	std::cout << "Normal: " << std::endl;
	::iter(strings, 4, print_normal<std::string>);
	std::cout << "To Upper: " << std::endl;
	::iter(strings, 4, print_to_upper);
	std::cout << "To Lower: " << std::endl;
	::iter(strings, 4, print_to_lower);

	double doubles[] = {1.23, 4.56, 7.89};

	std::cout << "Doubles: " << std::endl;
	::iter(doubles, 3, print_normal<double>);
}