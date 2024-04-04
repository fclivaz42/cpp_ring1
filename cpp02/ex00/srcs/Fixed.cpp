/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:45:39 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/04 20:54:49 by fclivaz          ###    LAUSANNE.CH      */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/FixedClass.hpp"


Fixed::Fixed()
{
	std::cout << "Default constructor called. Value set at 0.\n";
	this->_fixedNumber = 0;
}

Fixed::Fixed(const Fixed &src)
{
	this->_fixedNumber = src._fixedNumber;
}

Fixed& Fixed::operator=(const Fixed &src)
{
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits(void)
{
	return this->_fixedNumber;
}

void Fixed::setRawBits(int rawBits)
{
	this->_fixedNumber = rawBits;
}
