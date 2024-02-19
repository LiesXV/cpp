/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.hpp                                           :+:      :+:    :+:   */
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
#include <list>
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

class PMergeMe {

private :

	int									_oddNbr;
	std::vector<int>					_numbers;
	std::vector<int>					_sequence;
	std::vector<std::pair<int, int> >	_sortedPairs; 

	PMergeMe(const PMergeMe& other) : _numbers(other._numbers) {};
	
	//		SURCHARGE D'OPERATEUR
	PMergeMe& operator=(const PMergeMe& other) {
		if (this != &other) {
			this->_numbers = other.getNumbers();
		}
		return *this;
	}

	//		FUNCTIONS
	void pairSort( void );
	void pushSequence(std::vector<std::pair<int, int> > *sequence, std::vector<std::pair<int, int> > tmp, int size);
	void recursiveSort(std::vector<std::pair<int, int> > *sequence);
	void makeGroups( void );

public :
	//		CONSTRUCTEURS
	PMergeMe( void )  : _oddNbr(-1) {};
	~PMergeMe( void ) {};

	//		FUNCTIONS
	void	checkArgs ( int argc, char **argv );
	void	sort ( void );

	//		GETTERS
	const std::vector<int>&	getNumbers() const { return _numbers; };

	//		EXCEPTION
	class BadArgsException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "Bad arguments";
		}
	};

};

#endif