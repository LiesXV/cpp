/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:23:18 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:50:16 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Includes.hpp"

Brain::Brain ( void )
{
	std::cerr << "Brain Default Constructor Called" << std::endl;
	return ;
}

Brain::~Brain ( void )
{
	std::cerr << "Brain Destructor Called" << std::endl;
	return ;
}

Brain	&Brain::operator=(const Brain &obj)
{
	std::cerr << "Brain Copy Assignement Constructor Called";
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = obj.getIdea(i);
	}
	return (*this);
}

Brain::Brain(const Brain &obj)
{
	std::cerr << "Brain Copy Constructor Called" << std::endl;
	*this = obj;
	return ;
}

std::string	Brain::getIdea(int i) const
{
	if (i >= 0 && i < 100 )
		return (this->_ideas[i]);
	else
		return (NULL);
}

void	Brain::setIdea(int i, std::string idea)
{
	if (i >= 0 && i <= 99)
		this->_ideas[i] = idea;
}