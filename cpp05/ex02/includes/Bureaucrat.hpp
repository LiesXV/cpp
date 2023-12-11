/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:20:05 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 14:50:16 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Includes.hpp"

class AForm;

class Bureaucrat {

private :

	std::string	_name;
	int		_grade;

public :

	Bureaucrat		( void );
	~Bureaucrat		( void );
	Bureaucrat		( std::string const name , unsigned int grade );
	Bureaucrat		( const Bureaucrat &obj );
	Bureaucrat		&operator=( const Bureaucrat &obj );

	std::string const	&getName ( void ) const;
	unsigned int	getGrade ( void ) const;

	void	signAForm		( AForm &form ) const ;
	void	executeForm		( AForm &form ) const ;
	void	incrementGrade	( void );
	void	decrementGrade	( void );

	class	GradeTooHighException : public std::exception
	{
	public :
	
		const char *what() const throw()
		{
			return ("[ERROR] Grade too high (Bureaucrat)");
		}
	};
	class	GradeTooLowException : public std::exception
	{
	public :
	
		const char *what() const throw()
		{
			return ("[ERROR] Grade too low (Bureaucrat)");
		}
	};
};






#endif