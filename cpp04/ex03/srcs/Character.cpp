/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:37:06 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/21 01:27:00 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassCharacter.hpp"
#include "../incl/ClassAMateria.hpp"

Character::Character(void)
{
	std::cout << "this should not be called either...\n";
}

Character::Character(const std::string& Name) : _name(Name), _inUse(0)
{
	std::cout << "Character String Constructor called.\n";
}

Character::Character(const Character& src)
{
	std::cout << "Character copy constructor called.\n";
}

Character& Character::operator=(const Character& src)
{
}

Character::~Character()
{
	for (int i = 0; i < this->_inUse; i++)
		delete this->_slots[i];
	std::cout << "Character " << this->_name << " deleted.\n";
}

void	Character::equip(AMateria *m)
{
	if (_inUse == 4) {
		std::cout << "4 Materia are already in use!\n";
		return;
	}
	std::cout << m->getType() << " equipped in slot " << (this->_slots + 1) << ".\n";
	this->_slots[this->_inUse] = m;
	++this->_inUse;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= this->_inUse) {
		std::cout << "Invalid Materia Slot.\n";
		return;
	}
	std::cout << this->_name;
	this->_slots[idx]->use(target);
}
