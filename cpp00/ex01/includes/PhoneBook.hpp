/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:52:31 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/06 13:20:14 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "../includes/Contact.hpp"

class PhoneBook {
	
public :

	PhoneBook( void );
	~PhoneBook ( void );

	void	addContact( void );
	void	searchContact ( void );

private :
	
	int		_seeContacts( void ) const;
	int	_contacts;
	Contact repertoire[8];
};

#endif