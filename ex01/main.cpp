/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeestev <adeestev@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 15:48:49 by adeestev          #+#    #+#             */
/*   Updated: 2026/10/04 18:19:47 by adeestev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void printElement(const T &element)
{
	std::cout << element << " ";
}

void incrementValue(int &val)
{
	val += 1;
}

int	main(void)
{
	std::cout << std::endl;
	std::cout << "-- Testing non constant array of ints --\n" << std::endl;
	int intArray[] = {1, 2, 3, 4, 5};
	size_t intLen = sizeof(intArray) / sizeof(intArray[0]);

	std::cout << "Original array: ";
	iter(intArray, intLen, printElement<int>);
	std::cout << std::endl;

	std::cout << "Incrementing values of elements... " << std::endl;
	iter(intArray, intLen, incrementValue);

	std::cout << "Modified array: ";
	iter(intArray, intLen, printElement<int>);
	std::cout << std::endl;

	std::cout << "\n-- Testing constant array of strings --\n" << std::endl;
	const std::string strArray[] = {"Hello", "little", "42", "campus"};
	size_t strLen = sizeof(strArray) / sizeof(strArray[0]);

	std::cout << "Array of strings: ";
	iter(strArray, strLen, printElement<std::string>);
	std::cout << std::endl;

	return (0);
}
	