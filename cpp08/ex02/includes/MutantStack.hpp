/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:41:39 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/01/29 12:47:54 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MSTACK_HPP
# define MSTACK_HPP

#include <stack>
#include <deque>

# define END		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T> {

public :

	MutantStack() {};
	MutantStack(const MutantStack<T, Container>& obj) : MutantStack<T, Container>::stack(obj) {};
	~MutantStack() {};
	
	MutantStack<T, Container>& operator=(const MutantStack<T, Container>& obj)
	{
		if (this != &obj)
			this->MutantStack<T, Container>::stack::operator=(obj);
		return *this;
	}


	typedef typename std::deque<T>::iterator				iterator;
	typedef typename std::deque<T>::reverse_iterator		reverse_iterator;

	iterator			begin() { return this->c.begin(); };
	iterator			end() { return this->c.end(); };
	reverse_iterator	rbegin() { return this->c.rbegin(); };
	reverse_iterator	rend() { return this->c.rend(); };

};

#endif
