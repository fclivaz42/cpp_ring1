/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaIce.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:49:48 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/21 01:27:13 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassMateriaIce.hpp"
#include "../incl/ClassICharacter.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice constructor called.\n";
}

Ice::Ice(const Ice &src) : AMateria(src._type)
{
	std::cout << "Ice copy Constructor Called\n";
}

Ice& Ice::operator=(const Ice &src)
{
	std::cout << "Ice = operator called.\n";
	*this = src;
	return *this;
}

Ice::~Ice(void)
{
	std::cout << "Ice destroyed.\n";
}

AMateria*	Ice::clone(void) const
{
	AMateria* ret = new Ice();
	return ret;
}

void	Ice::use(ICharacter& target)
{
	std::cout << " shoots an ice bolt at " << target.getName() << "!\n";
}
