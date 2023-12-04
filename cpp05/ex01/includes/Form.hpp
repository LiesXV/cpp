/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:40:50 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/04 19:17:03 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FORM_HPP
# define FORM_HPP

#include "Includes.hpp"

class Form {

private :

	const string		_name;
	bool				_isSigned;
	unsigned const int	_gradeToSign;
	unsigned const int	_gradeToExecute; 
	
public :

	Form	( void );
	~Form	( void );
	Form	( string const name , unsigned int gradeToSign, unsigned int gradeToExecute );
	Form	( const Form &obj );
	Form	&operator=( const Form &obj );
	
	string const	&getName 			( void ) const;
	unsigned int	getGradeToSign		( void ) const;
	unsigned int	getGradeToExecute	( void ) const;
	bool			getSigningState		( void ) const;

	class	GradeTooHighException : public std::exception
	{
	public :
	
		const char *what() const throw()
		{
			return ("[ERROR] Grade too high (Form)");
		}
	};
	class	GradeTooLowException : public std::exception
	{
	public :
	
		const char *what() const throw()
		{
			return ("[ERROR] Grade too low (Form)");
		}
	};

	
};

#endif
