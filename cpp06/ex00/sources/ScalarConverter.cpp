/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:07:17 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 15:33:08 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void )
{
}

ScalarConverter::~ScalarConverter( void )
{
}

void ScalarConverter::convert ( std::string &str )
{

	std::cout <<  str  << std::endl;

	long int i = strtol(str.c_str(), NULL, 10);


	std::cout <<  i  << std::endl;


}