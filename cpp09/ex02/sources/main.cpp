/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:08:54 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/02/22 08:43:50 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

int main(int argc, char** argv)
{
	PmergeMeVector vector;
	try
	{
		vector.checkArgs(argc, argv);
		vector.sort();
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << "[ERROR] " << e.what() << END << std::endl;
		return 1;
	}

	// PmergeMeDeque deque;
	// try
	// {
	// 	deque.checkArgs(argc, argv);
	// 	deque.sort();
	// }
	// catch (const std::exception& e)
	// {
	// 	std::cerr << RED << "[ERROR] " << e.what() << END << std::endl;
	// 	return 1;
	// }

	return 0;
}
