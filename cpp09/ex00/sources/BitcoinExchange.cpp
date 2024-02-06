/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:07:17 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/02/06 14:15:00 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void )
{
}

BitcoinExchange::~BitcoinExchange( void )
{
}

void BitcoinExchange::convert  ( void )
{
	this->fillDataMap();
	this->readFile();
}

void BitcoinExchange::fillDataMap ( void )
{
	std::string filename("./sources/data.csv");
	std::ifstream file(filename.c_str());
	if (!file.is_open())
	{
		throw  dataFileMissingException();
	}

	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::string date, value;
		size_t commaPos = line.find(',');
		if (commaPos != std::string::npos)
		{
			date = line.substr(0, commaPos);
			value = line.substr(commaPos + 1);
			float floatValue = atof(value.c_str());
			this->_dataMap[date] = floatValue;
		}
	}
	file.close();
}

void BitcoinExchange::readFile()
{

	std::ifstream file(_filename.c_str());
	if (!file.is_open()) { throw fileOpeningErrorException(); }

	std::string	line;
	std::getline(file, line);

	while (std::getline(file, line))
	{
		std::string date, rate;
		try {
			size_t commaPos = line.find('|');
			if (commaPos == std::string::npos) {
				throw badFormatException();
			}

			date = line.substr(0, commaPos);
			rate = line.substr(commaPos + 1);
			trimStr(&date, &rate);
			checkValidDate(date);
			convertValue(date, checkValidRate(rate));
		}
		catch (const std::exception& e) {
			std::cout << YELLOW <<"[WARNING] " << e.what() << END << std::endl;
		}
	}
	file.close();
}

float BitcoinExchange::checkValidRate(const std::string& rate)
{
	std::istringstream iss(rate);
	float floatRate;
	if (!(iss >> floatRate)) {
		throw badFormatException();
	}
	if (floatRate > 0 && floatRate <= 1000) {
		return floatRate;
	}
	throw badFormatException();
}

void BitcoinExchange::checkValidDate(const std::string& date)
{
	struct tm	timeStruct;

	memset(&timeStruct, 0, sizeof(struct tm));
	if (strptime(date.c_str(), "%Y-%m-%d", &timeStruct) == NULL) { throw badFormatException(); }


	time_t	time = mktime(&timeStruct);
	struct	tm* normalizedTimeStruct = localtime(&time);

	char	buffer[11];
	strftime(buffer, sizeof(buffer), "%Y-%m-%d", normalizedTimeStruct);

	
	std::string	normalizedDate(buffer);
	if (date != normalizedDate) { throw badFormatException(); }

	if (normalizedDate < "2009-01-02" || normalizedDate > "2029-12-31" ) { throw badFormatException(); }
}


void BitcoinExchange::trimStr(std::string* str1, std::string* str2)
{
	size_t start = str1->find_first_not_of(" \t\n\r\f\v");
	if (start != std::string::npos)
		*str1 = str1->substr(start);

	size_t end = str1->find_last_not_of(" \t\n\r\f\v");
	if (end != std::string::npos)
		*str1 = str1->substr(0, end + 1);

	start = str2->find_first_not_of(" \t\n\r\f\v");
	if (start != std::string::npos)
		*str2 = str2->substr(start);

	end = str2->find_last_not_of(" \t\n\r\f\v");
	if (end != std::string::npos)
		*str2 = str2->substr(0, end + 1);
}

void BitcoinExchange::convertValue(const std::string& date, float rate)
{
	std::map<std::string, float>::iterator it = findDataByKey(date);

	if (it != _dataMap.end()) {
		std::cout << date << " ==> " << rate << " ==> " << it->second * rate << std::endl;
	} else {
		it = findPreviousDate(date);
		if (it != _dataMap.end()) {
			std::cout << date << " ==> " << rate << " ==> " << it->second * rate << std::endl;
		}	
	}
}

std::map<std::string, float>::iterator BitcoinExchange::findDataByKey(const std::string& date)
{
	std::map<std::string, float>::iterator it = this->_dataMap.find(date);
	return it;
}

std::map<std::string, float>::iterator BitcoinExchange::findPreviousDate(const std::string& date)
{
	std::map<std::string, float>::iterator it = this->_dataMap.begin();
	std::map<std::string, float>::iterator prevIt = this->_dataMap.end();

	while (it != this->_dataMap.end() && it->first < date) {
		prevIt = it;
		++it;
	}

	return prevIt;
}
