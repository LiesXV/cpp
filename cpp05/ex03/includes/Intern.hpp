/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:45:07 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/07 19:27:22 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Includes.hpp"

class AForm;

class Intern {

public :


	AForm *makeForm (const string &formName, const string &target) const ;

	Intern	( void );
	~Intern	( void );
	Intern	( const Intern &obj );
	Intern	&operator=( const Intern &obj );

	class InvalidFormException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Invalid form type");
		}
	};
	
};

#endif