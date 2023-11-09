/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:49:50 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/11/09 15:15:17 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Sed.hpp"

int main (int argc, char **argv)
{
	
	//			PARSING
	std::string 		to_find = argv[2];
	std::string 		to_replace = argv[3];
	
	if (argc != 4)
		return ((std::cerr << "Wrong number of arguments" << std::endl), 1);	
	if ((!argv[1][0]) || (to_find.length() == 0))
	{
		std::cerr << "You can't put empty filename or string to find" << std::endl;
		return (1);
	}

	//			OPENS

	std::ifstream		ifs(argv[1], std::ifstream::in);
	if (ifs.is_open() == false)
		return (1);
		
	std::stringstream buffer;
	buffer << ifs.rdbuf();

	std::string			outfile = argv[1];
	std::ofstream		ofs((outfile.substr(0, outfile.find_last_of('.')) += ".replace").c_str(), std::ios::trunc);
	if (ofs.is_open() == false)
		return (ifs.close(), 1);
		
	//			READ AND REPLACE

	std::string			bufcpy;
	size_t				end = 0;
	size_t				start = 0;
	
	bufcpy = buffer.str();
	end = bufcpy.find(to_find, start);
	while (end != std::string::npos)
	{
		ofs << bufcpy.substr(start, end - start);
		ofs << to_replace;
		start = end + to_find.length();
		end = bufcpy.find(to_find, start);
	}
	ofs << bufcpy.substr(start);
	
	//			CLOSES
	
	ifs.close();
	ofs.close();
	return (0);
}
