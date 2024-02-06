/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:41:27 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/01/16 13:18:42 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

///////////////////////////////////////////////////////
//					    GETTERS 				     //
///////////////////////////////////////////////////////

template <typename T>
unsigned int Array<T>::getSize() const
{
	return this->_size;
}

///////////////////////////////////////////////////////
//					OPERATOR OVERLOAD				 //
///////////////////////////////////////////////////////

template <typename T>
Array<T>& Array<T>::operator=( const Array<T>& obj )
{
	std::cout << "Array Copy Assignment Constructor Called" << std::endl;
	if (this != &obj)
	{
		this->~Array();
		this->_size = obj.getSize();
		this->_array = new T[obj.getSize()];
		for (unsigned int i = 0; i < obj.getSize(); i++)
			this->_array[i] = obj._array[i];
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int i)
{
	if (i >= this->_size)
		throw OutOfRangeException();
	return this->_array[i];
}

///////////////////////////////////////////////////////
//					CONSTRUCTORS				     //
///////////////////////////////////////////////////////

template <typename T>
Array<T>::~Array	( void )
{
	std::cout << "Array Default Destructor Called" << std::endl;
	delete [] this->_array;
}

template <typename T>
Array<T>::Array	( void ) : _size(0), _array(new T[0])
{
	std::cout << "Array Default Constructor Called" << std::endl;
}

template <typename T>
Array<T>::Array	( unsigned int n ) : _size(n), _array(new T[n])
{
	std::cout << "Array Affectation Constructor Called" << std::endl;
}

template <typename T>
Array<T>::Array	( const Array &obj )
{
	std::cout << "Array Copy Constructor Called" << std::endl;
	this->_array = new T[0];
	*this = obj;
}

