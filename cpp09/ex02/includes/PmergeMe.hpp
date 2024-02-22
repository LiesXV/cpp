/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:56:31 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 15:31:50 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_HPP
# define PMERGE_HPP

#include <vector>
#include <cmath>
#include <algorithm>
#include <deque>
#include <iostream>
#include <sstream>
#include <string>

# define END		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"

class PmergeMeVector {

private :

	int									_oddNbr;
	std::vector<int>					_numbers;
	std::vector<int>					_sequence;
	std::vector<int>					_groups;
	std::vector<int> 					_index;
	std::vector<std::pair<int, int> >	_sortedPairs;
	std::vector<std::pair<int, int> >	_newSortedPairs;

	PmergeMeVector(const PmergeMeVector& other) : _numbers(other._numbers) {};
	
	//		SURCHARGE D'OPERATEUR
	PmergeMeVector& operator=(const PmergeMeVector& other) {
		if (this != &other) {
			this->_numbers = other.getNumbers();
		}
		return *this;
	}

	//		FUNCTIONS
	int		findSecond(int first); 
	void	pairSort( void );
	void	makeGroups( void );
	void	binarySearch( void );
	void	recursiveSort(std::vector<int> *sequence);

public :

	//		CONSTRUCTEURS
	PmergeMeVector( void )  : _oddNbr(-1) {};
	~PmergeMeVector( void ) {};

	//		FUNCTIONS
	void	checkArgs ( int argc, char **argv );
	void	sort ( void );

	//		GETTERS
	const std::vector<int>&	getNumbers() const { return _numbers; };
	const std::vector<int>&	getSequence() const { return _sequence; };
	// getsortedPairs
	const std::vector<std::pair<int, int> >&	getSortedPairs() const { return _sortedPairs; };

	//		SETTERS
	void	setNumbers(std::vector<int> numbers) { _numbers = numbers; };

	//		EXCEPTION
	class BadArgsException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "Bad arguments";
		}
	};

};

class PmergeMeDeque {

private :

	int									_oddNbr;
	std::deque<int>					_numbers;
	std::deque<int>					_sequence;
	std::deque<int>					_groups;
	std::deque<int> 					_index;
	std::deque<std::pair<int, int> >	_sortedPairs;

	PmergeMeDeque(const PmergeMeDeque& other) : _numbers(other._numbers) {};
	
	//		SURCHARGE D'OPERATEUR
	PmergeMeDeque& operator=(const PmergeMeDeque& other) {
		if (this != &other) {
			this->_numbers = other.getNumbers();
		}
		return *this;
	}

	//		FUNCTIONS
	void pairSort( void );
	void pushSequence(std::deque<std::pair<int, int> > *sequence, std::deque<std::pair<int, int> > tmp, int size);
	void recursiveSort(std::deque<std::pair<int, int> > *sequence);
	void makeGroups( void );
	void binarySearch( void );

public :
	//		CONSTRUCTEURS
	PmergeMeDeque( void )  : _oddNbr(-1) {};
	~PmergeMeDeque( void ) {};

	//		FUNCTIONS
	void	checkArgs ( int argc, char **argv );
	void	sort ( void );

	//		GETTERS
	const std::deque<int>&	getNumbers() const { return _numbers; };

	//		EXCEPTION
	class BadArgsException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "Bad arguments";
		}
	};

};



template <typename T>
void afterSortingCheck(const T& container) 
{
	typename T::const_iterator it = container.begin();
	typename T::const_iterator next = it;
	next++;
	while (next != container.end()) 
	{
		if (*it > *next) 
		{
			std::cout<< "Error: container of digit is not sorted" << std::endl;
			throw std::exception();
		}
		it++;
		next++;
	}
	return ;
}

#endif