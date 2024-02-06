/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:07:17 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/01/02 14:44:49 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

// Init
ScalarConverter::ScalarConverter()
{
	std::cout << GREEN << "[LOG] " << RESET << "ScalarConverter class has been created" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
	*this = obj;
}

ScalarConverter::~ScalarConverter(void)
{
	std::cout << RED << "[LOG] " << RESET << "ScalarConverter class has been destroyed" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj)
{
	(void)obj;
	return (*this);
}

// Body
void	ScalarConverter::byDefault(std::string value)
{
	if (value == "-inf" || value == "-inff")
	{
		std::cout << "char:   impossible" << std::endl;
		std::cout << "int:    " << std::numeric_limits<int>::min() << std::endl;
		std::cout << "float:  " << std::numeric_limits<float>::min() << std::endl;
		std::cout << "double: " << std::numeric_limits<double>::min() << std::endl;
	}
	else if (value == "+inf" || value == "+inff")
	{
		std::cout << "char:   impossible" << std::endl;
		std::cout << "int:    " << std::numeric_limits<int>::max() << std::endl;
		std::cout << "float:  " << std::numeric_limits<float>::max() << std::endl;
		std::cout << "double: " << std::numeric_limits<double>::max() << std::endl;
	}
	else if (value == "nan" || value == "nanf")
	{
		std::cout << "char:   impossible" << std::endl;
		std::cout << "int:    impossible" << std::endl;
		std::cout << "float:  nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else
		std::cout << RED << "[ERROR] " << RESET << "The input is impossible to convert." << std::endl;
}

int	ScalarConverter::isChar(int type, std::string value)
{
	if (value.length() == 1 && (value[0] < '0' || value[0] > '9'))
	{
		return (CHAR);
	}
	return (type);
}

int	ScalarConverter::isInt(int type, std::string value)
{
	size_t	i;

	for (i = 0; i < value.length(); i++)
	{
		if (value[i] == '-' && i == 0)
			continue;
		if (value[i] < '0' || value[i] > '9')
			return (type);
	}
	return (INT);
}

int	ScalarConverter::isFloat(int type, std::string value)
{
	size_t	i;

	for (i = 0; i <value.length(); i++)
	{
		if (value[i] == '-' && i == 0)
			continue;
		if (value[i] == '.')
			break;
		if (value[i] < '0' || value[i] > '9')
			return (type);
	}
	if (value[i] != '.')
		return (type);
	for (++i; i < value.length(); i++)
	{
		if (value[i] == 'f')
			break;
		if (value[i] < '0' || value[i] > '9')
			return (type);
	}
	if (value[i] != 'f')
		return (type);
	if (++i != value.length())
		return (type);
	return (FLOAT);
}

int	ScalarConverter::isDouble(int type, std::string value)
{
	size_t	i;

	for (i = 0; i < value.length(); i++)
	{
		if (value[i] == '-' && i == 0)
			continue;
		if (value[i] == '.')
			break;
		if (value[i] < '0' || value[i] > '9')
			return (type);
	}
	if (value[i] != '.')
		return (type);
	for (++i; i < value.length(); i++)
	{
		if (value[i] < '0' || value[i] > '9')
			return (type);
	}
	return (DOUBLE);
}

void	ScalarConverter::convert(std::string value)
{
	char		value_c;
	int			value_i;
	float		value_f;
	double		value_d;
	int			type = INVALID;
	long		long_nb;
	
	type = isChar(type, value);
	if (type != CHAR)
	{
		type = isInt(type, value);
		if (type != INT)
		{	
			type = isFloat(type, value);
			if (type != FLOAT)
				type = isDouble(type, value);
		}
	}

	switch (type)
	{
		case INVALID:
			byDefault(value);
			return ;

		case CHAR:
			value_c	= value[0];
			value_d	= static_cast<double>(value_c);
			value_i	= static_cast<int>(value_c);
			value_f	= static_cast<float>(value_c);
			break;

		case INT:
			long_nb = std::strtol(value.c_str(), NULL, 10);
			if (long_nb > std::numeric_limits<int>::max() || long_nb < std::numeric_limits<int>::min())
			{
				std::cout << RED << "[ERROR] " << RESET << "The 'integer' type is impossible to convert (Overflow)." << std::endl;
				return ;
			}
			value_i = static_cast<int>(long_nb);
			value_c	= static_cast<char>(value_i);
			value_d	= static_cast<double>(value_i);
			value_f	= static_cast<float>(value_i);
			break;

		case FLOAT:
			value_f	= std::strtof(value.c_str(), NULL);
			if (value_f == HUGE_VALF)
			{
				std::cout << RED << "[ERROR] " << RESET << "The 'float' type input is impossible to convert (Overflow)." << std::endl;
				return ;
			}
			value_i	= static_cast<int>(value_f);
			value_c	= static_cast<char>(value_f);
			value_d	= static_cast<double>(value_f);
			break;

		case DOUBLE:
			value_d	= std::strtod(value.c_str(), NULL);
			if (value_d == HUGE_VAL)
			{
				std::cout << RED << "[ERROR] " << RESET << "The 'double' type input is impossible to convert (Overflow)." << std::endl;
				return ;
			}
			value_c	= static_cast<char>(value_d);
			value_i	= static_cast<int>(value_d);
			value_f	= static_cast<float>(value_d);
			break;
	}

	// CHARACTER
	if (value_i >= 32 && value_i <= 126)
		std::cout << "char:   '" << value_c << "'" << std::endl;
	else
		std::cout << "char:   Not displayable" << std::endl;


	// INTEGER
	if (type == FLOAT && (value_f > std::numeric_limits<int>::max() || value_f < std::numeric_limits<int>::min()))
		std::cout << "int:    overflow" << std::endl;
	else if (type == DOUBLE && (value_d > std::numeric_limits<int>::max() || value_d < std::numeric_limits<int>::min()))
		std::cout << "int:    overflow" << std::endl;
	else
		std::cout << "int:    " << value_i << std::endl;

	// FLOAT
	if (type == DOUBLE && (value_d > std::numeric_limits<float>::max() || value_d < -std::numeric_limits<float>::max()))
		std::cout << "float:  overflow" << std::endl;
	else
	{
		std::cout << "float:  " << value_f;
		if (value_f - value_i == 0)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}

	// DOUBLE
	std::cout << "double: " << value_d;
	if (value_d - value_i == 0)
		std::cout << ".0";
	std::cout << std::endl;
}