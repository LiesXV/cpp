/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMeVector.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:07:17 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 15:33:08 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/PMergeMe.hpp"

void PMergeMeVector::pairSort()
{
	if (this->_numbers.size() % 2 != 0)
	{
		this->_oddNbr = this->_numbers.back();
		this->_numbers.pop_back();
	}

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


void PMergeMeVector::sort()
{
	if (this->_numbers.size() == 0)
	{
		throw BadArgsException();
	}

	if (this->_numbers.size() == 1)
	{
		this->_sequence.push_back(this->_numbers[0]);
		return;
	}

	if (this->_numbers.size() == 2)
	{
		if (this->_numbers[0] > this->_numbers[1])
		{
			this->_sequence.push_back(this->_numbers[1]);
			this->_sequence.push_back(this->_numbers[0]);
		}
		else
		{
			this->_sequence.push_back(this->_numbers[0]);
			this->_sequence.push_back(this->_numbers[1]);
		}
		return;
	}

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

	this->_numbers.clear(); // Vider la liste "numbers"

	std::cout << "Séquence avant tri récursif : ";
	for (size_t i = 0; i < this->_sortedPairs.size(); i++)
	{
		this->_numbers.push_back(this->_sortedPairs[i].first);
		std::cout << " " << this->_sortedPairs[i].first;
	}

	std::cout << std::endl;

	// Trier les paires
	this->recursiveSort(&this->_numbers); 

	std::cout << std::endl;
	std::cout << std::endl;

	// Afficher les éléments de la liste "numbers" après le tri récursif
	std::cout << "Séquence après tri récursif : ";
	for (size_t i = 0; i < this->_numbers.size(); i++)
	{
		std::cout << " " << this->_numbers[i];
	}
	std::cout << std::endl;

	// Afficher les éléments de la liste "numbers" après le tri récursif
	std::cout << "SortedPair après tri récursif : ";
	for (size_t i = 0; i < this->_sortedPairs.size(); i++)
	{
		std::cout << " (" << this->_sortedPairs[i].first << ", " << this->_sortedPairs[i].second << ")";
	}
	std::cout << std::endl;



	// this->_sequence.push_back(this->_sortedPairs[0].second);
	// Ajouter les éléments de la liste "sortedPairs" à la liste "sequence"
	for (size_t i = 0; i < this->_numbers.size(); i++) 
	{
		this->_newSortedPairs.push_back(std::make_pair(this->_numbers[i], this->findSecond(this->_numbers[i])));
	}

	// Afficher les éléments de la liste "newSortedPairs"
	std::cout << "newSortedPairs : ";
	for (size_t i = 0; i < this->_newSortedPairs.size(); i++)
	{
		std::cout << "(" << this->_newSortedPairs[i].first << ", " << this->_newSortedPairs[i].second << ") ";
	}
	std::cout << std::endl;

	// std::cout << "(" << this->_sortedPairs.begin()->first << ", " << this->_sortedPairs.begin()->second << ") ";
	
	// Ajouter le premier élément de la liste "sortedPairs" à la liste "sequence"
	for (size_t i = 0; i < this->_newSortedPairs.size(); i++)
	{
		this->_sequence.push_back(this->_newSortedPairs[i].first);
	}

	// Supprimer le premier élément de la liste "sortedPairs"
	this->_sortedPairs.erase(this->_sortedPairs.begin());	

	std::cout << "Sequence triée avec l'élément appareillé au premier: ";
	for (size_t i = 0; i < this->_sequence.size(); i++)
	{
		std::cout << " " << this->_sequence[i];
	}


	this->_numbers.clear(); // Vider la liste "numbers"

	// Ajouter les éléments de la liste "sortedPairs" à la liste "numbers"
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

	if (this->_numbers.size() > 1)
	{
		this->makeGroups();
	}
	else
	{
		this->_groups.push_back(this->_numbers[0]);
		this->_index.push_back(2);
	}

	std::cout << std::endl;

	for (size_t i = 0; i < this->_groups.size(); i++)
	{
		std::cout << "Index " << this->_index[i] << " : " << this->_groups[i] << std::endl;
	}
	
	this->binarySearch();

	std::cout << "Sequence finale: ";
	for (size_t i = 0; i < this->_sequence.size(); i++)
	{
		std::cout << " " << this->_sequence[i];
	}

	std::cout << std::endl;

	try {
		afterSortingCheck(this->_sequence);
		std::cout << "tri correctement effectué !" << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << "[ERROR] " << e.what() << std::endl;
	}

}

// fonction qui parcours sortedPair, qui cherche un first et qui return le second qui lui est associé
int PMergeMeVector::findSecond(int first)
{
	for (size_t i = 0; i < this->_sortedPairs.size(); i++)
	{
		if (this->_sortedPairs[i].first == first)
		{
			return this->_sortedPairs[i].second;
		}
	}
	return -1;
}

void PMergeMeVector::binarySearch( void )
{
	for (size_t i = 0; i < this->_groups.size(); i++)
	{
		int index = this->_index[i];
		int element = this->_groups[i];
		// std::vector<int>& group = this->_groups[i];

		int left = 0;
		int right = index + i;

		while (left < right)
		{
			int mid = left + (right - left) / 2;

			if (this->_sequence[mid] < element)
			{
				left = mid + 1;
			}
			else
			{
				right = mid;
			}
		}

		// Insert element at the correct position
		this->_sequence.insert(this->_sequence.begin() + left, element);
		std::cout << "i : " << i << " element : " << element << " :";
		for (size_t i = 0; i < this->_sequence.size(); i++)
		{
			std::cout << " " << this->_sequence[i];
		}
		std::cout << std::endl;
	}
}

void PMergeMeVector::makeGroups( void )
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
			this->_groups.push_back(groups[i][j]);
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
			this->_index.push_back(index[i][j]);
		}
		std::cout << std::endl;
	}

}

void PMergeMeVector::checkArgs(int argc, char **argv)
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
}
	
void PMergeMeVector::recursiveSort(std::vector<int> *sequence)
{
	if (sequence->empty())
		return;

	if (sequence->size() == 1)
		return;

	std::cout << "Sequence non triée: ";
	for (size_t i = 0; i < sequence->size(); i++)
	{
		std::cout << " " << sequence->at(i);
	}
	std::cout << std::endl;

	PMergeMeVector tmp;

	tmp.setNumbers(*sequence);
	tmp.sort();

	sequence->clear();

	for (size_t i = 0; i < tmp.getSequence().size(); i++)
	{
		sequence->push_back(tmp.getSequence()[i]);
	}

	std::cout << "Sequence triée: ";
	for (size_t i = 0; i < sequence->size(); i++)
	{
		std::cout << " " << sequence->at(i);
	}
	
	std::cout << std::endl;

	// std::cout << std::endl;


	// tmp.push_back(sequence->front());
	// sequence->erase(sequence->begin());

	// recursiveSort(sequence);

	// pushSequence(sequence, tmp, sequence->size());
}

// void PMergeMeVector::pushSequence(std::vector<std::pair<int, int> > *sequence, std::vector<std::pair<int, int> > tmp, int size)
// {
// 	if (tmp.empty()) {
// 		return;
// 	}

// 	int tmpValue = tmp.at(0).first;
// 	int tmpValueSec = tmp.at(0).second;
// 	tmp.erase(tmp.begin());

// 	std::vector<std::pair<int, int> >::iterator it = sequence->begin();
// 	while (it != sequence->end() && it->first < tmpValue) {
// 		++it;
// 	}

// 	sequence->insert(it, std::make_pair(tmpValue, tmpValueSec));

// 	pushSequence(sequence, tmp, size - 1);
// }
