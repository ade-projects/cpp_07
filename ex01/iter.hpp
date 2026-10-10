/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeestev <adeestev@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 15:48:44 by adeestev          #+#    #+#             */
/*   Updated: 2026/10/10 10:46:41 by adeestev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename type, typename funct>
void iter(type *array, const size_t len, funct function)
{
	if (!array)
		return ;
	for (size_t i = 0; i < len; ++i)
	{
		function(array[i]);
	}
}

#endif
