/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:28:23 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:50:16 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include "Includes.hpp"

class PresidentialPardonForm : public AForm {

public :

	PresidentialPardonForm	( const std::string &target );
	PresidentialPardonForm	( const PresidentialPardonForm &obj );
	PresidentialPardonForm	&operator=( const PresidentialPardonForm &obj );
	~PresidentialPardonForm	( void );

	const std::string &getTarget( void ) const;

	void execute			( Bureaucrat const &executor );
	
private :

	PresidentialPardonForm	( void );
	std::string _target;
};

#endif