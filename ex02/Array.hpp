/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeestev <adeestev@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 10:26:12 by adeestev          #+#    #+#             */
/*   Updated: 2026/10/10 13:36:03 by adeestev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template <typename type>
class Array
{
	private:
		type*			_elements;
		unsigned int	_size;

	public:
		Array() : _elements(NULL), _size(0) {}
		Array(unsigned int n) : _elements(new type[n]()), _size(n) {}
		Array(const Array &src) : _elements(NULL), _size(0)
		{
			*this = src;
		}
		Array &operator=(const Array &src)
		{
			if (this != &src)
			{
				delete[] _elements;
				_size = src._size;
				if (_size > 0)
				{
					_elements = new type[_size];
					for (unsigned int i = 0; i < _size; ++i)
					{
						_elements[i] = src._elements[i];
					}
				}
				else
				{
					_elements = NULL;
				}
			}
			return (*this);
		}
		~Array()
		{
			delete[] _elements;
		}

		type &operator[](unsigned int index)
		{
			if (index >= _size)
			{
				throw std::out_of_range("Index is out of bounds");
			}
			return (_elements[index]);
		}

		const type &operator[](unsigned int index) const
		{
			if (index >= _size)
			{
				throw std::out_of_range("Index is out of bounds");
			}
			return (_elements[index]);
		}

		unsigned int size() const
		{
			return (_size);
		}
};

#endif
