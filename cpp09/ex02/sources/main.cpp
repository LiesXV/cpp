/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:08:54 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/02/21 11:58:01 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PMergeMe.hpp"

int main(int argc, char** argv)
{
	PMergeMeVector vector;
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

	// PMergeMeDeque deque;
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
