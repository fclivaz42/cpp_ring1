/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 20:58:41 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/15 22:20:01 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassCat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called.\n";
	this->_type = "Cat";
	this->_catBrain = new Brain;
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat copy constructor called.\n";
	this->_type = src._type;
	this->_catBrain = src._catBrain;
}

Cat&	Cat::operator=(const Cat &src)
{
	std::cout << "Cat copy assignation constructor called.\n";
	if (this != &src) {
		this->_type = src._type;
		this->_catBrain = src._catBrain;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called.\n";
	delete this->_catBrain;
}

void	Cat::makeSound(void) const
{
	std::cout << "MEOW MEOW MEOW MEOW MEOW\n";
}
