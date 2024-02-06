/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenhaim <ibenhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:41:39 by ibenhaim          #+#    #+#             */
/*   Updated: 2024/01/04 15:52:14 by ibenhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
T const &	max ( const T &a, const T &b ) {
	return ( a>b ? a : b);
}

template <typename T>
T const &	min ( const T &a, const T &b ) {
	return ( a>=b ? b : a);
}

template <typename T>
void		swap (T &a, T &b ) {
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}
