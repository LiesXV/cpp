/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:24:49 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/08 13:40:55 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main (void)
{
	Zombie *test = zombieHorde(5, "Jacques");
	
	test[0].announce();
	test[1].announce();
	test[2].announce();
	test[3].announce();
	test[4].announce();
	
	delete [] test;
}