/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:30:04 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/01/25 15:07:00 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
#include <iostream>


Span::Span(const unsigned int N) : _size(N), _i(0) {
    // Initialize your class members here if needed
}

Span::Span(const Span &obj) : _size(obj._size), _i(obj._i) {
    // Implement the copy constructor logic here
    // Copy any other members if needed
}

Span::~Span() {
    // Implement the destructor logic here
}

Span& Span::operator=(const Span &obj) {
    if (this != &obj) {
        this->_size = obj.getSize();
		this->_i = obj.getI();
		this->_vector = obj._vector;
    }
    return *this;
}

unsigned int Span::getSize() const {
    return _size;
}

unsigned int Span::getI() const {
    return _i;
}

std::vector<int> Span::getVector() const {
    return _vector;
}

void Span::addNumber( const int nbr )
{
	if (this->getI() < this->getSize())
    {
        this->_vector.push_back(nbr);
        this->_i++;
	    std::cout << BLUE << nbr << " is added to the array." << END << std::endl;
    }
    else throw Span::ContainerFullException();
}

void Span::addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for (std::vector<int>::iterator it = begin; it != end; it++) {
        try
        {
            if (this->getI() < this->getSize())
            {
                this->_vector.push_back(*it);
                this->_i++;
                std::cout << BLUE << *it << " has been added to the array." << END << std::endl;
            }
            else throw Span::ContainerFullException();
        }
    	catch (const std::exception& e)
        {
            std::cerr << RED << e.what() << END << std::endl;
            return ;
        }
    }
}

unsigned int Span::shortestSpan( void )
{
    if (this->getI() < 2)
        throw ContainerEmptyException();

    std::sort(this->_vector.begin(), this->_vector.end());

    unsigned int shortestSpan = std::abs(*(this->_vector.begin() + 1) - *this->_vector.begin());

    for (std::vector<int>::iterator it = this->_vector.begin(); it + 1 != this->_vector.end(); ++it) {
        unsigned int span = std::abs(*(it + 1) - *it);
        if (span < shortestSpan)
            shortestSpan = span;
    } 
    return (shortestSpan);
}

unsigned int Span::longestSpan( void )
{
    if (this->getI() < 2)
        throw ContainerEmptyException();
    unsigned int maxElement = *std::max_element(this->_vector.begin(), this->_vector.end());
    unsigned int minElement = *std::min_element(this->_vector.begin(), this->_vector.end());
 
    return (maxElement - minElement);
}