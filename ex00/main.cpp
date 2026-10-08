/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeestev <adeestev@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 14:16:37 by adeestev          #+#    #+#             */
/*   Updated: 2026/10/08 13:31:26 by adeestev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "templates.hpp"

int main(void)
{
    std::cout << " -- Testing int types: --" << std::endl;
    int a = 2;
    int b = 3;
    std::cout << "Original values are: a = " << a << " and b = " << b << std::endl;
    std::cout << "After applying the function templates: " << std::endl;
    ::swap(a, b);
    std::cout << "Swapping: " << "a = " << a << ", b = " << b << std::endl;
    ::swap(a, b);
    std::cout << "Swapping again: " << "a = " << a << ", b = " << b << std::endl;
    std::cout << "Returning min (a, b) = " << ::min(a, b) << std::endl;
    std::cout << "Returning max (a, b) = " << ::max(a, b) << std::endl;
    std::cout << std::endl;

    std::cout << " -- Testing double types: --" << std::endl;
    double c = 2.7;
    double d = 8.45;
    std::cout << "Original values are: c = " << c << " and d = " << d << std::endl;
    std::cout << "After applying the same function templates: " << std::endl;
    ::swap(c, d);
    std::cout << "Swapping: " << "c = " << c << ", d = " << d << std::endl;
    ::swap(c, d);
    std::cout << "Swapping again: " << "c = " << c << ", d = " << d << std::endl;
    std::cout << "Returning min (c, d) = " << ::min(c, d) << std::endl;
    std::cout << "Returning max (c, d) = " << ::max(c, d) << std::endl;
    std::cout << std::endl;

    std::cout << "-- Testing string types: --" << std::endl;
    std::string e = "empty";
    std::string f = "full";
    std::cout << "Original values are: e = " << e << " and f = " << f << std::endl;
    std::cout << "And again with the same function templates: " << std::endl;
    ::swap(e, f);
    std::cout << "Swapping: "<< "e = " << e << ", f = " << f << std::endl;
    ::swap(e, f);
    std::cout << "Swapping again: "<< "e = " << e << ", f = " << f << std::endl;

    std::cout << "Returning min(e, f) = " << ::min(e, f) << std::endl;
    std::cout << "Returning max(e, f) = " << ::max(e, f) << std::endl;

    return (0);
}
