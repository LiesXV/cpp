/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:08:54 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/01/02 12:54:16 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../includes/Data.hpp"

int main()
{
	Data input;

	input.firstName = "Ilyes";
	input.lastName = "Benhaimouda";
	input.nickname = "ibenhaim";
	input.age = 23;
	input.level = 5.24;

	std::cout << "first name: " << input.firstName << std::endl;
	std::cout << "last name: " << input.lastName << std::endl;
	std::cout << "nickname: " << input.nickname << std::endl;
	std::cout << "age: " << input.age << std::endl;
	std::cout << "level: " << input.level << std::endl;

	std::cout << "------------------------" << std::endl;

	uintptr_t output_uintptr = serialize(&input);

	Data* output = deserialize(output_uintptr);

	std::cout << "first name: " << output->firstName << std::endl;
	std::cout << "last name: " << output->lastName << std::endl;
	std::cout << "nickname: " << output->nickname << std::endl;
	std::cout << "age: " << output->age << std::endl;
	std::cout << "level: " << output->level << std::endl;
}