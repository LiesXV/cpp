/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:28:23 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/07 15:11:53 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include "Includes.hpp"

class ShrubberyCreationForm : public AForm {

public :

	ShrubberyCreationForm	( const string &target );
	ShrubberyCreationForm	( const ShrubberyCreationForm &obj );
	ShrubberyCreationForm	&operator=( const ShrubberyCreationForm &obj );
	~ShrubberyCreationForm	( void );

	const string &getTarget( void ) const;

	void execute			( Bureaucrat const &executor );
	
private :

	ShrubberyCreationForm	( void );
	string _target;
	
};

#endif