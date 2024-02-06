/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:10:16 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/01/29 12:49:35 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "MutantStack.tpp"
#include <list>
#include <iostream>

int main()
{
    std::cout << "SUBJECT TEST" << std::endl
                <<  "------------" << std::endl;
    MutantStack<int>	mstack;
    std::list<int>		lst;

    mstack.push(5);
    mstack.push(17);
    lst.push_back(5);
    lst.push_back(17);

    std::cout << "first element : " << mstack.top() << " " << lst.back() << std::endl;

    mstack.pop();
    lst.pop_back();

    std::cout << "size : " << mstack.size() << " " << lst.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    lst.push_back(3);	
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);

    MutantStack<int>::iterator its = mstack.begin();
    std::list<int>::iterator itl = lst.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++its;
    --its;
    ++itl;
    --itl;
    while (its != ite)
    {
        std::cout << *its << " " << *itl << std::endl;
        ++its;
        ++itl;
    }
}