/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:23:18 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/26 18:33:36 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"

Brain::Brain ( void )
{
	cout << "Brain Default Constructor Called" << endl;
	for (int i = 0; i < 100; i += 4)
	{
		this->_ideas[i] = "eat";
		this->_ideas[i + 1] = "sleep";
		this->_ideas[i + 2] = "thinking";
		this->_ideas[i + 4] = "play";
	}
	return ;
}

Brain::~Brain ( void )
{
	cout << "Brain Destructor Called" << endl;
	return ;
}

Brain	&Brain::operator=(const Brain &obj)
{
	cout << "Brain Copy Assignement Constructor Called";
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = obj.getIdea(i);
	}
	return (*this);
}

Brain::Brain(const Brain &obj)
{
	cout << "Brain Copy Constructor Called" << endl;
	*this = obj;
	return ;
}

string	Brain::getIdea(int i) const
{
	if (i >= 0 && i < 100)
		return (this->_ideas[i]);
	else
		return (NULL);
}