/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:25:30 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/12 00:03:36 by fclivaz          ###    LAUSANNE.CH      */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ScavTrapClass.hpp"

ScavTrap::ScavTrap(const std::string& Name) : _name(Name)
{
	std::cout << "ScavTrap constructor called with name " << Name << std::endl;
	this->_ep = 10;
	this->_hp = 10;
	this->_atkdmg = 0;
}

ScavTrap::ScavTrap(const ClapTrap &src)
{
	std::cout << "ScavTrap copy constructor called\n";
	this->_ep = src._ep;
	this->_hp = src._hp;
	this->_atkdmg = src._atkdmg;
	this->_name = src._name;
}

ScavTrap& ScavTrap::operator=(const ClapTrap &src)
{
	std::cout << "ScavTrap copy assignation constructor called\n";
	if (this != &src) {
		this->_ep = src._ep;
		this->_hp = src._hp;
		this->_atkdmg = src._atkdmg;
		this->_name = src._name;
	}
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " has been destroyed :(\n";
}

