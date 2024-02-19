/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:07:17 by ibenhaim          #+#    #+#             */
/*   Updated: 2023/12/10 15:33:08 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

void RPN::operate(char operand)
{
	switch (operand)
	{
		case '+':
		{
			if (this->_stack.size() < 2)
			{
				throw BadArgsException();
			}
			int operand2 = this->_stack.top();
			this->_stack.pop();
			int operand1 = this->_stack.top();
			this->_stack.pop();
			int result = operand1 + operand2;
			this->_stack.push(result);
			break;
		}
		case '-':
		{
			if (this->_stack.size() < 2)
			{
				throw BadArgsException();
			}
			int operand2 = this->_stack.top();
			this->_stack.pop();
			int operand1 = this->_stack.top();
			this->_stack.pop();
			int result = operand1 - operand2;
			this->_stack.push(result);
			break;
		}
		case '*':
		{
			if (this->_stack.size() < 2)
			{
				throw BadArgsException();
			}
			int operand2 = this->_stack.top();
			this->_stack.pop();
			int operand1 = this->_stack.top();
			this->_stack.pop();
			int result = operand1 * operand2;
			this->_stack.push(result);
			break;
		}
		case '/':
		{
			if (this->_stack.size() < 2)
			{
				throw BadArgsException();
			}
			int operand2 = this->_stack.top();
			this->_stack.pop();
			int operand1 = this->_stack.top();
			this->_stack.pop();
			if (operand2 == 0)
				throw DivByZeroException();
			int result = operand1 / operand2;
			this->_stack.push(result);
			break;
		}
		default:
			break;
	}
}

void RPN::calculate()
{
	if (this->_arg.empty())
	{
		throw RPN::BadArgsException();
	}

	for (size_t i = 0; i < this->_arg.length(); i++)
	{
		if (std::isdigit(this->_arg[i]) || this->_arg[i] == '+' || this->_arg[i] == '-' || this->_arg[i] == '*' || this->_arg[i] == '/')
		{
			if (std::isdigit(this->_arg[i]) && std::isspace(this->_arg[i + 1]))
			{
				this->_stack.push(atoi(this->_arg.substr(i, 1).c_str()));
			}
			else if ((this->_arg[i] == '+' || this->_arg[i] == '-' || this->_arg[i] == '*' || this->_arg[i] == '/') && (std::isspace(this->_arg[i + 1]) || this->_arg[i + 1] == '\0'))
				operate(this->_arg[i]);
			else	
				throw BadArgsException();
		}
	}

	if (this->_stack.size() != 1)
		throw BadArgsException();
	std::cout << this->_stack.top() << std::endl;
}

