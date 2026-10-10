/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeestev <adeestev@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 10:26:19 by adeestev          #+#    #+#             */
/*   Updated: 2026/10/10 15:21:42 by adeestev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

#define MAX_VAL 750

void	subjectTest()
{
	Array<int> numbers(MAX_VAL);
	int	*mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			delete [] mirror;
			return ;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;
}

void	ownTest()
{
	std::cout << "Testing empty array: " << std::endl;
	Array<int> emptyArr;
	std::cout << "Empty array size: " << emptyArr.size() << std::endl;
	try
	{
		std::cout << emptyArr[0] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught (empty array): " << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Testing string array: " << std::endl;
	Array<std::string> strArr(4);
	strArr[0] = "Hello";
	strArr[1] = "Little";
	strArr[2] = "42";
	strArr[3] = "campus";
	std::cout << "Size of array is: " << strArr.size() << std::endl;
	std::cout << "Array content is: " << std::endl;
	for (unsigned int i = 0; i < strArr.size(); ++i)
	{
		std::cout << " - " << strArr[i] << std::endl;
	}
}

int	main(void)
{
	std::cout << "\n - Test included in project's page: - \n" << std::endl;
	subjectTest();
	std::cout << std::endl;
	std::cout << "\n - Own test: - \n" << std::endl;
	ownTest();

	return (0);
}
