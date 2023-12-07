/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:28:23 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/05 19:14:01 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include "Includes.hpp"

class RobotomyRequestForm : public AForm {

public :

	RobotomyRequestForm		( const string &target );
	RobotomyRequestForm		( const RobotomyRequestForm &obj );
	RobotomyRequestForm		&operator=( const RobotomyRequestForm &obj );
	~RobotomyRequestForm	( void );

	const string &getTarget( void ) const;

	void execute			( Bureaucrat const &executor );
	
private :

	RobotomyRequestForm		( void );
	string _target;
	
};

#endif