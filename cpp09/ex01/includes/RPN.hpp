/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:56:31 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 15:31:50 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <stack>
#include <iostream>
#include <sstream>

# define END		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"

class RPN {

private :

	std::string	_arg;
	std::stack<int>	_stack;

	RPN( void ) {};
	RPN(const RPN& other) : _arg(other._arg) {};
	
	//		SURCHARGE D'OPERATEUR
	RPN& operator=(const RPN& other) {
		if (this != &other) {
			this->_arg = other.getArg();
		}
		return *this;
	}

	//		FUNCTIONS
	// void	 calc( void );

public :
	//		CONSTRUCTEURS
	RPN( std::string &arg ) : _arg(arg) {};
	~RPN( void ) {};

	//		FUNCTIONS
	void	calculate	( void );

	//		GETTERS
	const std::string&	getArg() const { return _arg; };

	//		EXCEPTION
	class BadArgsException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "bad arguments";
		}
	};

};

#endif