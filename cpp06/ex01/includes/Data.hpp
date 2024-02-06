/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:56:31 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/01/02 12:53:51 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <stdint.h>

typedef struct
{
	std::string	firstName;
	std::string lastName;
	std::string nickname;
	int			age;
	double		level;
} Data;

Data* deserialize(uintptr_t raw);
uintptr_t serialize(Data* ptr);
