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

#include "../includes/RPN.hpp"

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: " << argv[0] << " <filename>" << std::endl;
		return 1;
	}

	std::string args(argv[1]);

	RPN rpn(args);
	try
	{
		rpn.calculate();
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << "[ERROR] " << e.what() << END << std::endl;
		return 1;
	}

	return 0;
}
