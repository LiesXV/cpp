/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:40:50 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/05 17:12:20 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Includes.hpp"

class Bureaucrat;

class AForm {

private :

	const string		_name;
	bool				_isSigned;
	unsigned const int	_gradeToSign;
	unsigned const int	_gradeToExecute; 
	
public :

	AForm	( void );
	virtual ~AForm	( void );
	AForm	( string const name , unsigned int gradeToSign, unsigned int gradeToExecute );
	AForm	( const AForm &obj );
	AForm	&operator=( const AForm &obj );
	
	string const	&getName 			( void ) const;
	unsigned int	getGradeToSign		( void ) const;
	unsigned int	getGradeToExecute	( void ) const;
	bool			getSigningState		( void ) const;

	void			beSigned	( const Bureaucrat &obj );
	virtual void	execute		( const Bureaucrat &executor ) = 0;

	class	GradeTooHighException : public std::exception
	{
	public :
	
		const char *what() const throw()
		{
			return ("[ERROR] Grade too high (AForm)");
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
	class	FormNotSignedException : public std::exception
	{
	public :
	
		const char *what() const throw()
		{
			return ("[ERROR] Form must be signed first. ");
		}
	};
	
};

std::ostream &operator<<(std::ostream &os, const AForm &obj);

#endif
