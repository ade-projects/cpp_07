/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeestev <adeestev@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 14:20:00 by adeestev          #+#    #+#             */
/*   Updated: 2026/10/08 13:20:13 by adeestev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template <typename type>
void swap(type &a, type &b)
{
	type temp = a;
	a = b;
	b = temp;
}

template <typename type>
const type &min(const type &a, const type &b)
{
	return (a < b) ? a : b;	
}

template <typename type>
const type &max(const type &a, const type &b)
{
	return (a > b) ? a : b;
}

#endif
