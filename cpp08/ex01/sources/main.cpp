/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:10:16 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/01/25 15:06:40 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "Span.hpp"

int main() {
	
    std::srand(static_cast<unsigned int>(std::time(NULL)));

    std::vector<int> randomNumbers;

    for (int i = 0; i < 11; ++i) {
        randomNumbers.push_back(std::rand() % 100);
    }
	
    Span mySpan(10);

    mySpan.addNumber(randomNumbers.begin(), randomNumbers.end());

	std::vector<int> myVector = mySpan.getVector();

	std::cout << "The longest Span is " << mySpan.longestSpan() << std::endl;

	std::cout << "The shortest Span is " << mySpan.shortestSpan() << std::endl;

    return 0;
}
