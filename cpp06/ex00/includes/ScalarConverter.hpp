/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:56:31 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 15:31:50 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

#include <iostream>
#include <string>
# include <cstdlib>

class ScalarConverter {

private :

	ScalarConverter( void );
	~ScalarConverter( void );

public :

	static void convert ( std::string &str );
	
};

#endif