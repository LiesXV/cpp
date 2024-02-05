/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:07:17 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 15:33:08 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"



#include <cctype>

bool hasNumbersGreaterThanNine(const std::string& str)
{
	for (std::string::size_type i = 0; i < str.length(); i++) // Change the data type of 'i' to 'std::string::size_type'
	{
		char c = str[i];
		if (std::isdigit(c) && c > '9')
		{
			throw RPN::BadArgsException(); // Throw exception if digit is greater than '9'
		}
	}
	return true; // Add a return statement
}

void RPN::calculate()
{
	if (this->_arg.empty())
	{
		throw RPN::BadArgsException();
	}

	 (this->_arg); // Call the function to check for numbers greater than 9

	// Rest of the code...
}

