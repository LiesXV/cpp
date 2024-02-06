/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:41:27 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/01/04 16:10:17 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	iter (T* array, int size, void (*f)(const T&)) {
	
	for (int i = 0; i < size; i++)
	{
		(*f)(array[i]);
	}
}

template <typename T>
void print_normal(const T& a)
{
	std::cout << "\t" << a << std::endl;
}