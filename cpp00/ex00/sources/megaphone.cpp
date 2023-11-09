/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:20:47 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/08 11:56:39 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <locale>
#include <string>
#include <iomanip>
#include <cstdlib>

int main(int argc, char **argv)
{
	std::locale loc;
	std::string	tmp;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < argc; i++)
		{
			tmp.assign(argv[i]);
			for (std::string::size_type i=0; i<tmp.length(); ++i)
				std::cout << std::toupper(tmp[i],loc);
		}
	std::cout << std::endl;
	return (0);
}