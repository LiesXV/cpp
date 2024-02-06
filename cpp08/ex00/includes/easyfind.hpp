/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:41:39 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/01/18 11:59:27 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>

class ElementNotFoundException : public std::exception
{
public:
	const char* what() const throw()
	{
		return ("Element not found in container");
	}
};

template <class T, class H>
typename T::iterator easyfind (T& container, H toFind)
{
	typename T::iterator it;
	typename T::iterator ite = container.end();

	for (it = container.begin(); it != ite; ++it)
	{
		if (*it == toFind)
			return (it);
	}
	throw ElementNotFoundException();
};