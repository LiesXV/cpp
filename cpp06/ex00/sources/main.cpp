/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:08:54 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 15:30:13 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		if (argv[1])
		{
			std::string toConvert(argv[1]);	
			ScalarConverter::convert( toConvert );
		}
		else
			return 1;
	}
		
	return 0;
}