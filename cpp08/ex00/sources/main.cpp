/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:10:16 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/01/18 13:50:00 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"
#include <list>
#include <vector>
#include <iostream>

# define RESET		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"


void print(int i)
{
	std::cout << i << std::endl; 
}

int main()
{
	std::list<int> list;
	std::vector<int> vector;

	for (int i = 0; i <= 42; i++)
		vector.push_back(i);

	try
	{
		std::vector<int>::iterator it_vector = easyfind(vector, 12);
		std::cout << "Vector starting at 12:" << std::endl;
		for_each(it_vector, vector.end(), print);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	for (int i = 0; i <= 42; i++)
		list.push_back(i);

	try
	{
		std::list<int>::iterator it_list = easyfind(list, 19);
		std::cout << "List starting at 19:" << std::endl;
		for_each(it_list, list.end(), print);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}