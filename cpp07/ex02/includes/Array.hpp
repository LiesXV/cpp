/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:16:22 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/01/11 14:34:27 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {

public :

	~Array	( void );
	Array	( void );
	Array	( unsigned int n );
	Array	( const Array &obj );

	Array<T> &operator=( const Array<T> &obj );
	T& operator[](unsigned int i);

	unsigned int	getSize() const;
	
	class OutOfRangeException : public std::exception
	{
	public :
		const char *what() const throw()
		{
			return ("Element is out of range of array");
		}
	};


private :

	unsigned int _size;
	T* _array;
};

#include "Array.tpp"

#endif