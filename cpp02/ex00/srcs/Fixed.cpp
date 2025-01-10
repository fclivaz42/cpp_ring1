/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:45:39 by fclivaz           #+#    #+#             */
/*   Updated: 2025/01/06 17:20:18 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassFixed.hpp"

Fixed::Fixed() : _fixedNumber(0)
{
	std::cout << "Default constructor called. Value set at 0.\n";
}

Fixed::Fixed(const Fixed &src) : _fixedNumber(src._fixedNumber)
{
	std::cout << "Copy constructor called.\n";
}

Fixed& Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignation constructor called.\n";
	if (this != &src)
		this->_fixedNumber = src._fixedNumber;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Fixed destructor called.\n";
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called.\n";
	return this->_fixedNumber;
}

void Fixed::setRawBits(int const rawBits)
{
	this->_fixedNumber = rawBits;
}
