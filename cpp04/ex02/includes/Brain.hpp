/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:16:58 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/28 14:03:04 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Includes.hpp"

class Brain {

private :

	string _ideas[100];

public :

	string	getIdea( int i ) const;
	void	setIdea( int i, string idea);

	Brain	( void );
	~Brain	( void );
	Brain	(const Brain &obj);
	Brain	&operator=(const Brain &obj);
};

#endif