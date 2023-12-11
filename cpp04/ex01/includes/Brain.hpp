/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:16:58 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:50:16 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Includes.hpp"

class Brain {

private :

	std::string _ideas[100];

public :

	std::string	getIdea( int i ) const;
	void	setIdea( int i, std::string idea);

	Brain	( void );
	~Brain	( void );
	Brain	(const Brain &obj);
	Brain	&operator=(const Brain &obj);
};

#endif