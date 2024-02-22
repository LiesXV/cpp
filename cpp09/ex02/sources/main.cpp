/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:08:54 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/02/22 10:27:30 by ibenhaim         ###   ########.fr       */
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
		if (DEBUG == 1)
		{
			std::cout << GREEN << "Séquence finale: " << END;
			for (size_t i = 0; i < vector.getSequence().size(); i++)
			{
				std::cout << " " << vector.getSequence()[i];
			}

			std::cout << std::endl;
		}
		else
		{
			std::cout << YELLOW << "After : " << END;
			for (size_t i = 0; i < vector.getSequence().size(); i++)
			{
				std::cout << " " << vector.getSequence()[i];
			}
			std::cout << std::endl;
		}

		try {
			afterSortingCheck(vector.getSequence());
			std::cout << GREEN << "Tri correctement effectué !" << END << std::endl;
		}
		catch (const std::exception& e) {
			std::cerr << "[ERROR] " << e.what() << END << std::endl;
		}
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
