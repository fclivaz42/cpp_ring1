/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:25:30 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/11 21:57:31 by fclivaz          ###    LAUSANNE.CH      */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClapTrapClass.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default ClapTrap constructor called.";
	this->_name = "Default";
	this->_ep = 10;
	this->_hp = 10;
	this->_atkdmg = 0;
}

ClapTrap::ClapTrap(std::string Name) : _name(Name)
{
	std::cout << "String ClapTrap constructor called with name " << Name <<std::endl;
	this->_ep = 10;
	this->_hp = 10;
	this->_atkdmg = 0;
}

ClapTrap::~ClapTrap(void)
{
}
