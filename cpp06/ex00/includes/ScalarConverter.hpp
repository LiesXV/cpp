/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:56:31 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/01/05 12:18:49 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <limits>
# include <cmath>

# define RESET		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"

enum {
	INVALID,
	CHAR,
	INT,
	FLOAT,
	DOUBLE
};

class ScalarConverter {

private:

	// Body
	void			byDefault(std::string value);
	int			isChar(int type, std::string value);
	int			isInt(int type, std::string value);
	int			isFloat(int type, std::string value);
	int			isDouble(int type, std::string value);

public:

	// Init
	ScalarConverter();
	ScalarConverter(std::string type, int grade);
	ScalarConverter(const ScalarConverter &obj);
	~ScalarConverter(void);
	ScalarConverter &operator=(const ScalarConverter &obj);

	// Body
	static void		convert(std::string value);
};

#endif