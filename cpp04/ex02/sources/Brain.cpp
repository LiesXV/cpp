/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:23:18 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/01 18:53:09 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"

Brain::Brain ( void )
{
	cerr << "Brain Default Constructor Called" << endl;
	return ;
}

Brain::~Brain ( void )
{
	cerr << "Brain Destructor Called" << endl;
	return ;
}

Brain	&Brain::operator=(const Brain &obj)
{
	cerr << "Brain Copy Assignement Constructor Called";
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = obj.getIdea(i);
	}
	return (*this);
}

Brain::Brain(const Brain &obj)
{
	cerr << "Brain Copy Constructor Called" << endl;
	*this = obj;
	return ;
}

string	Brain::getIdea(int i) const
{
	if (i >= 0 && i < 100 )
		return (this->_ideas[i]);
	else
		return (NULL);
}

void	Brain::setIdea(int i, string idea)
{
	if (i >= 0 && i <= 99)
		this->_ideas[i] = idea;
}