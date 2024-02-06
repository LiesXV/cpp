/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:56:31 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/01/02 13:00:32 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Base	{	
public:
	Base(){}
	virtual ~Base(){}
};

class A : public Base	{
public:
	A(){}
	~A(){}
};

class B : public Base	{
public:
	B(){}
	~B(){}
};

class C : public Base	{
public:
	C(){}
	~C(){}
};