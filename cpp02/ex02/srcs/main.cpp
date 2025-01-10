/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:27:20 by fclivaz           #+#    #+#             */
/*   Updated: 2025/01/06 19:40:41 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassFixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	std::cout << "a is " << a << std::endl;
	std::cout << "a is " << ++a << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "a is " << a++ << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "a + d is " << a + d << std::endl;
	std::cout << "c - b is " << c - b << std::endl;
	std::cout << "a * c is " << a * c << std::endl;
	std::cout << "b / a is " << b / a << std::endl;
	std::cout << "b / 0 is " << b / Fixed(0) << std::endl;
	std::cout << "is a greater than b? ";
	std::cout << (a > b ? "Yes!\n" : "No!\n");
	std::cout << "is a smaller than c? ";
	std::cout << (a < c ? "Yes!\n" : "No!\n");
	std::cout << "is b equals to d? ";
	std::cout << (b == d ? "Yes!\n" : "No!\n");
	std::cout << "max is " << Fixed::max(a, b) << std::endl;
	std::cout << "min is " << Fixed::min(a, b) << std::endl;

	return 0;
}
