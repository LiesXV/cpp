/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:07:17 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 15:33:08 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/PMergeMe.hpp"

void PMergeMe::pairSort()
{
	for (size_t i = 0; i < this->_numbers.size(); i += 2)
	{
		if (this->_numbers[i] > this->_numbers[i + 1])
		{
			int temp = this->_numbers[i];
			this->_numbers[i] = this->_numbers[i + 1];
			this->_numbers[i + 1] = temp;
		}
		this->_sortedPairs.push_back(std::make_pair(this->_numbers[i + 1], this->_numbers[i]));
	}
}


void PMergeMe::sort()
{
	// Afficher les éléments de la liste "numbers" avant le tri
	std::cout << "Avant le tri : ";
	for (size_t i = 0; i < this->_numbers.size(); i++)
	{
		std::cout << this->_numbers[i] << " ";
	}
	std::cout << std::endl;

	this->pairSort();
	

	// Afficher les paires triées
	std::cout << "Paires swappées : ";
	for (size_t i = 0; i < this->_sortedPairs.size(); i++)
	{
		std::cout << "(" << this->_sortedPairs[i].first << ", " << this->_sortedPairs[i].second << ") ";
	}

	std::cout << std::endl;

	// Trier les paires
	this->recursiveSort(&this->_sortedPairs); 

	// Ajouter les éléments de la liste "sortedPairs" à la liste "sequence"
	this->_sequence.push_back(this->_sortedPairs[0].second);
	for (size_t i = 0; i < this->_sortedPairs.size(); i++) 
	{
		if (this->_sortedPairs[i].first != -1) {
			this->_sequence.push_back(this->_sortedPairs[i].first);
		}
	}

	// std::cout << "(" << this->_sortedPairs.begin()->first << ", " << this->_sortedPairs.begin()->second << ") ";
	
	// Supprimer le premier élément de la liste "sortedPairs"
	this->_sortedPairs.erase(this->_sortedPairs.begin());	

	std::cout << "Sequence triée avec l'élément appareillé au premier: ";
	for (size_t i = 0; i < this->_sequence.size(); i++)
	{
		std::cout << " " << this->_sequence[i];
	}

	this->_numbers.clear(); // Vider la liste "numbers"

	// Afficher les éléments de la liste "sortedPairs" après le tri
	for (size_t i = 0; i < this->_sortedPairs.size(); i++)
	{
		this->_numbers.push_back(this->_sortedPairs[i].second);
	}
	if (this->_oddNbr != -1) 
		this->_numbers.push_back(this->_oddNbr); // Ajouter l'élément impair à la liste "numbers"
	std::cout << std::endl;

	std::cout << "Elements non insérés: ";
	for (size_t i = 0; i < this->_numbers.size(); i++)
	{
		std::cout << " " << this->_numbers[i];
	}
	
	std::cout << std::endl;

	this->makeGroups();

	std::cout << std::endl;
}

void PMergeMe::makeGroups( void )
{
	std::vector<std::vector<int> > groups;
	size_t start = 0;
	int groupSize = 2;
	int power = 2;

	std::vector<int> group(this->_numbers.begin() + start, this->_numbers.begin() + groupSize);
	groups.push_back(group);
	group.clear();
	start = groupSize;
	std::cout << "groupSize = " << groupSize << std::endl;

	while (start < this->_numbers.size())
	{
		groupSize = pow(2, power) - groupSize;
		std::cout << "groupSize = " << groupSize << std::endl;
		power++;
		
		size_t end = start + groupSize;

		if (end > this->_numbers.size())
			end = this->_numbers.size();


		std::vector<int> group = std::vector<int>(this->_numbers.begin() + start, this->_numbers.begin() + end);
		groups.push_back(group);
		
		start = end;
	}


	for (size_t i = 0; i < groups.size(); i++)
	{
		std::cout << "Group " << i << " : ";
		for (size_t j = 0; j < groups[i].size(); j++)
		{
			std::cout << "  " << groups[i][j];
		}
		std::cout << std::endl;
	}

	// int k = groups[0].size();
	for (size_t i = 0; i < groups.size(); i++)
	{
		std::reverse(groups[i].begin(), groups[i].end());
	}

	std::cout << std::endl;

	for (size_t i = 0; i < groups.size(); i++)
	{
		std::cout << "Group " << i << " : ";
		for (size_t j = 0; j < groups[i].size(); j++)
		{
			std::cout << "  " << groups[i][j];
		}
		std::cout << std::endl;
	}

	std::vector<std::vector<int> > index(groups.size(), std::vector<int>()); // Initialize the index vector

	std::cout << std::endl;

	int k = 3;
	for (size_t i = 0; i < groups.size(); i++)
	{
		for (size_t j = 0; j < groups[i].size(); j++)
		{
			index[i].push_back(k);
			k++;
		}
	}

	for (size_t i = 0; i < index.size(); i++)
	{
		std::reverse(index[i].begin(), index[i].end());
	}

	for (size_t i = 0; i < index.size(); i++)
	{
		std::cout << "Index " << i << " : ";
		for (size_t j = 0; j < index[i].size(); j++)
		{
			std::cout << "  " << index[i][j];
		}
		std::cout << std::endl;
	}

}

void PMergeMe::checkArgs(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		std::string arg = argv[i];
		for (std::string::iterator it = arg.begin(); it != arg.end(); ++it)
		{
			char c = *it;
			if (!isdigit(c) && c != ' ')
				throw BadArgsException();
		}

		std::istringstream iss(arg.c_str());
		int num;

		while (iss >> num) {
			this->_numbers.push_back(num);
		}
	}
	if (this->_numbers.size() % 2 != 0)
	{
		this->_oddNbr = this->_numbers.back();
		this->_numbers.pop_back();
	}
}
	
void PMergeMe::recursiveSort(std::vector<std::pair<int, int> > *sequence)
{
	std::vector<std::pair<int, int> > tmp;

	if (sequence->empty())
		return;

	tmp.push_back(sequence->front());
	sequence->erase(sequence->begin());

	recursiveSort(sequence);

	pushSequence(sequence, tmp, sequence->size());
}

void PMergeMe::pushSequence(std::vector<std::pair<int, int> > *sequence, std::vector<std::pair<int, int> > tmp, int size)
{
	if (tmp.empty()) {
		return;
	}

	int tmpValue = tmp.at(0).first;
	int tmpValueSec = tmp.at(0).second;
	tmp.erase(tmp.begin());

	std::vector<std::pair<int, int> >::iterator it = sequence->begin();
	while (it != sequence->end() && it->first < tmpValue) {
		++it;
	}

	sequence->insert(it, std::make_pair(tmpValue, tmpValueSec));

	pushSequence(sequence, tmp, size - 1);
}
