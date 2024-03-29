/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:08:54 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/02/07 09:40:10 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << YELLOW << "Usage: " << argv[0] << " <filename>" << END << std::endl;
		return 1;
	}

	std::string filename(argv[1]);

	BitcoinExchange btc(filename);
	try
	{
		btc.convert();
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << "[ERROR] " << e.what() << END << std::endl;
		return 1;
	}

	return 0;
}
