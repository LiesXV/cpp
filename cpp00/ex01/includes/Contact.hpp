/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:52:29 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/07 11:22:46 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H 

class Contact {

public :
	
	Contact ( void );
	~Contact ( void );
	
	int	addContact( void );
	void printContact( void ) const;
	void displayResume ( void ) const;

private :

	int _testNumber ( void );
	int	_testInfos ( std::string str );
	std::string	_parseInfo(std::string str) const;
	std::string	_fname;
	std::string	_lname;
	std::string	_number;
	std::string _nname;
	std::string _secret;
};

#endif