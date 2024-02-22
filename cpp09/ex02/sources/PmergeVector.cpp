/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeVector.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:07:17 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 15:33:08 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/PmergeMe.hpp"

void PmergeMeVector::pairSort()
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

int PmergeMeVector::checkNumbersSize(int size)
{
	if (size == 0)
	{
		throw BadArgsException();
	}

	if (size == 1)
	{
		this->_sequence.push_back(this->_numbers[0]);
		return 1;
	}

	if (size == 2)
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
		return 1;
	}
	return 0;
}


void PmergeMeVector::sort()
{

	if (checkNumbersSize(this->_numbers.size()) == 1)
		return ;

	if (DEBUG == 1)
	{
		// Afficher les éléments de la liste "numbers" avant le tri
		std::cout << YELLOW << "Avant le tri : " << END;
		for (size_t i = 0; i < this->_numbers.size(); i++)
		{
			std::cout << this->_numbers[i] << " ";
		}
		std::cout << std::endl;
	}

	this->pairSort();

	// Afficher les paires triées
	if (DEBUG == 1)
	{
		std::cout << YELLOW << "Regrouper les éléments de X en ⌊n/2⌋ paires d'éléments puis déterminer le plus grand des deux éléments de chaque paire : " << END;
		for (size_t i = 0; i < this->_sortedPairs.size(); i++)
		{
			std::cout << "(" << this->_sortedPairs[i].first << ", " << this->_sortedPairs[i].second << ") ";
		}
		if (this->_oddNbr != -1)
			std::cout << YELLOW << "et l'élément impair : " << END << this->_oddNbr;
		std::cout << std::endl << std::endl;
	}

	this->_numbers.clear(); // Vider la liste "numbers" puis la remplir des premiers éléments de sortedPairs
	for (size_t i = 0; i < this->_sortedPairs.size(); i++)
	{
		this->_numbers.push_back(this->_sortedPairs[i].first);
	}

	// Trier les paires
	this->recursiveSort(&this->_numbers);

	for (size_t i = 0; i < this->_numbers.size(); i++) 
		this->_newSortedPairs.push_back(std::make_pair(this->_numbers[i], this->findSecond(this->_numbers[i])));


	if (DEBUG == 1) // Sortie du tri récursif avec la séquence triée suivante
	{
		for (size_t i = 0; i < this->_newSortedPairs.size(); i++)
		{
			std::cout << "(" << this->_newSortedPairs[i].first << ", " << this->_newSortedPairs[i].second << ") ";
		}
		std::cout << std::endl;
	}
	
	// Ajouter le premier élément de la liste "sortedPairs" à la liste "sequence"
	this->_sequence.push_back(this->_newSortedPairs[0].second);
	this->_newSortedPairs[0].second = -1;
	for (size_t i = 0; i < this->_newSortedPairs.size(); i++)
	{
		this->_sequence.push_back(this->_newSortedPairs[i].first);
	}

	if (DEBUG == 1)
	{
		std::cout << YELLOW << "Sequence triée avec l'élément appareillé au premier: " << END;
		for (size_t i = 0; i < this->_sequence.size(); i++)
		{
			std::cout << " " << this->_sequence[i];
		}
	}


	this->_numbers.clear(); // Vider la liste "numbers"

	// Ajouter les éléments de la liste "sortedPairs" à la liste "numbers"
	for (size_t i = 0; i < this->_newSortedPairs.size(); i++)
	{
		if (this->_newSortedPairs[i].second != -1)
			this->_numbers.push_back(this->_newSortedPairs[i].second);
	}

	// Ajouter l'élément impair à la liste "numbers"
	if (this->_oddNbr != -1) 
		this->_numbers.push_back(this->_oddNbr); 

	if (DEBUG == 1)
	{
		std::cout << YELLOW << ". Élément(s) non inséré(s): " << END;
		for (size_t i = 0; i < this->_numbers.size(); i++)
		{
			std::cout << " " << this->_numbers[i];
		}
		std::cout << std::endl << std::endl;
	}

	if (DEBUG == 1)
		std::cout << MAGENTA << "Classement des éléments non insérés par groupes." << END << std::endl;
	
	if (this->_numbers.size() > 1)
		this->makeGroups();
	else
	{
		this->_groups.push_back(this->_numbers[0]);
		this->_index.push_back(3);
		if (DEBUG == 1)
			std::cout << YELLOW << "Group 0 : " << END <<this->_numbers[0] << YELLOW << "\tIndex 0 : " << END << 2 << std::endl;
	}
	
	if (DEBUG == 1)
		std::cout << CYAN << "Utilisation de cet ordre pour insérer les éléments de nos groupes dans notre séquence S." << END << std::endl << std::endl;

	this->binarySearch();

	// std::cout << "Sequence finale: ";
	// for (size_t i = 0; i < this->_sequence.size(); i++)
	// {
	// 	std::cout << " " << this->_sequence[i];
	// }

	// std::cout << std::endl;

	// try {
	// 	afterSortingCheck(this->_sequence);
	// 	std::cout << "tri correctement effectué !" << std::endl;
	// }
	// catch (const std::exception& e) {
	// 	std::cerr << "[ERROR] " << e.what() << std::endl;
	// }

}

// fonction qui parcours sortedPair, qui cherche un first et qui return le second qui lui est associé
int PmergeMeVector::findSecond(int first)
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

void PmergeMeVector::binarySearch( void )
{
	for (size_t i = 0; i < this->_groups.size(); i++)
	{
		int index = this->_index[i];
		int element = this->_groups[i];

		size_t left = 0;
		size_t right = index + i;

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
		if (left >= this->_sequence.size())
			this->_sequence.push_back(element);
		else if (left == 0)
			this->_sequence.insert(this->_sequence.begin(), element);
		else
			this->_sequence.insert(this->_sequence.begin() + left, element);
	}
}

void PmergeMeVector::makeGroups( void )
{
	std::vector<std::vector<int> > groups;
	size_t start = 0;
	int groupSize = 2;
	int power = 2;

	std::vector<int> group(this->_numbers.begin() + start, this->_numbers.begin() + groupSize);
	groups.push_back(group);
	group.clear();
	start = groupSize;

	while (start < this->_numbers.size())
	{
		groupSize = pow(2, power) - groupSize;
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
		std::reverse(groups[i].begin(), groups[i].end());
	}

	for (size_t i = 0; i < groups.size(); i++)
	{
		for (size_t j = 0; j < groups[i].size(); j++)
			this->_groups.push_back(groups[i][j]);
	}

	std::vector<std::vector<int> > index(groups.size(), std::vector<int>()); // Initialize the index vector

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

	if (DEBUG == 1)
	{
		for (size_t i = 0; i < groups.size(); i++)
		{
			std::cout << YELLOW << "Group " << i << " : " << END;
			for (size_t j = 0; j < groups[i].size(); j++)
			{
				std::cout << "  " << groups[i][j];
			}

			std::cout << YELLOW "\tIndex " << i << " : " << END;
			for (size_t j = 0; j < index[i].size(); j++)
			{
				std::cout << "  " << index[i][j];
				this->_index.push_back(index[i][j]);
			}
			std::cout << std::endl;
		}
	}
	else
	{
		for (size_t i = 0; i < groups.size(); i++)
		{
			for (size_t j = 0; j < index[i].size(); j++)
			{
				this->_index.push_back(index[i][j]);
			}	
		}	
	}

	for (size_t i = 0; i < index.size(); i++)
	{

	}

}

void PmergeMeVector::checkArgs(int argc, char **argv)
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
	if (DEBUG == 0)
	{
		// Afficher les éléments de la liste "numbers" avant le tri
		std::cout << YELLOW << "Before : " << END;
		for (size_t i = 0; i < this->_numbers.size(); i++)
		{
			std::cout << this->_numbers[i] << " ";
		}
		std::cout << std::endl;
	}
}
	
void PmergeMeVector::recursiveSort(std::vector<int> *sequence)
{
	if (sequence->size() <= 1)
		return;

	if (DEBUG == 1)
		std::cout << GREEN << "Début d'un nouveau tri récursif." << END << std::endl;

	PmergeMeVector tmp;

	tmp.setNumbers(*sequence);
	tmp.sort();

	sequence->clear();
	for (size_t i = 0; i < tmp.getSequence().size(); i++)
	{
		sequence->push_back(tmp.getSequence()[i]);
	}

	if (DEBUG == 1)
		std::cout << std::endl << GREEN << "Sortie du tri récursif avec la séquence triée suivante : " << END;
}
