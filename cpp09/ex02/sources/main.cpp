/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:08:54 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/02/07 10:23:42 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PMergeMe.hpp"

int main(int argc, char** argv)
{
	PMergeMe merge;
	try
	{
		merge.checkArgs(argc, argv);
		merge.sort();
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << "[ERROR] " << e.what() << END << std::endl;
		return 1;
	}

	return 0;
}
