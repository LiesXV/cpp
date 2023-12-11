/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:40:50 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:50:16 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FORM_HPP
# define FORM_HPP

#include "Includes.hpp"

class Bureaucrat;

class Form {

private :

	const std::string		_name;
	bool				_isSigned;
	unsigned const int	_gradeToSign;
	unsigned const int	_gradeToExecute; 
	
public :

	Form	( void );
	~Form	( void );
	Form	( std::string const name , unsigned int gradeToSign, unsigned int gradeToExecute );
	Form	( const Form &obj );
	Form	&operator=( const Form &obj );
	
	std::string const	&getName 			( void ) const;
	unsigned int	getGradeToSign		( void ) const;
	unsigned int	getGradeToExecute	( void ) const;
	bool			getSigningState		( void ) const;

	void	beSigned( const Bureaucrat &obj);

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
			return ("[ERROR] Grade too low");
		}
	};
	class	AlreadySignedException : public std::exception
	{
	public :
	
		const char *what() const throw()
		{
			return ("[ERROR] Already Signed !");
		}
	};
	
};

std::ostream &operator<<(std::ostream &os, const Form &obj);

#endif
