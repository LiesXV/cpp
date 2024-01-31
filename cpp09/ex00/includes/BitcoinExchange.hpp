/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:56:31 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 15:31:50 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTC_EXCH_HPP
# define BTC_EXCH_HPP

#include <cstdlib>
#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <exception>
#include <ctime>
#include <cstring>

# define END		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"

class BitcoinExchange {

private :

	std::map<std::string, float>	_dataMap;
	std::string						_filename;

	BitcoinExchange( void );
	BitcoinExchange(const BitcoinExchange& other) : _dataMap(other._dataMap), _filename(other._filename) {};
	
	//		SURCHARGE D'OPERATEUR
	BitcoinExchange& operator=(const BitcoinExchange& other) {
		if (this != &other) {
			this->_dataMap = other.getData();
			this->_filename = other.getFilename();
		}
		return *this;
	}

	//		FUNCTIONS
	void									fillDataMap ( void );
	std::map<std::string, float>::iterator	findDataByKey (const std::string& date);
	void 									readFile ();
	void									trimStr (std::string* str1, std::string* str2);
	void									convertValue (const std::string& date, float rate);
	void									checkValidDate(const std::string& date);
	float									checkValidRate(const std::string& rate);
	std::map<std::string, float>::iterator	findPreviousDate(const std::string& date);

public :
	//		CONSTRUCTEURS
	BitcoinExchange( std::string &filename ) : _filename(filename) {};
	~BitcoinExchange( void );


	//		FUNCTIONS
	void	convert	( void );


	//		GETTERS
	const std::map<std::string, float>&		getData() const { return _dataMap; } 
	const std::string&						getFilename() const { return _filename; }


	//		EXCEPTION
	class dataFileMissingException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "data.csv file is missing.";
		}
	};

	class fileOpeningErrorException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "Can't open file given.";
		}
	};

	class badFormatException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "Bad Format.";
		}
	};



};

#endif