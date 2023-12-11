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

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
# include <exception>




# define END		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"


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

	void	incrementGrade ( void );
	void	decrementGrade ( void );

	class	GradeTooHighException : public std::exception
	{
	public :
	
		const char *what() const throw()
		{
			return ("Grade too high");
		}
	};
	class	GradeTooLowException : public std::exception
	{
	public :
	
		const char *what() const throw()
		{
			return ("Grade too low");
		}
	};
};






#endif