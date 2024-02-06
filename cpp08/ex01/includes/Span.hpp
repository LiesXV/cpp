/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:41:39 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/01/25 14:52:55 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>

#ifndef SPAN_HPP
# define SPAN_HPP

# define END		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"

class Span {

private :
	std::vector<int>	_vector;
	unsigned int		_size;
	unsigned int		_i;
	Span() : _size(0) {};
	
public : 
	Span	( const unsigned int N );
	Span	( const Span &obj );
	~Span	();
	Span& operator=(const Span &obj);
	
	unsigned int getSize() const;
	unsigned int getI() const;
	std::vector<int> getVector() const;

	void addNumber( const int nbr );
	void addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end );
	
	unsigned int shortestSpan( void );
	unsigned int longestSpan( void );

	class ContainerFullException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("[ERROR] Container full");
		}
	};

	class ContainerEmptyException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("[ERROR] Container have less than 2 values");
		}
	};
	
};

#endif