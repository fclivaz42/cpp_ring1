/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:06:24 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/11 14:33:29 by fclivaz          ###   LAUSANNE.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/ClassPhoneBook.hpp"
#include <array>
#include <string>

PhoneBook::PhoneBook(void)
{
	this->_count = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::Search(void)
{
	std::array<std::string, 5> CData;

	if (!this->_count) {
		std::cout << "No contacts found in phonebook.\n";
		return;
	}
	for (char id = 0; id < 8; ++id)
	{
		if (!this->_ct[id].init)
			break;
		CData = this->_ct[id].GetUserData();	
		std::cout << CData.at(0) << " ";
		std::cout << CData.at(1) << " ";
		std::cout << CData.at(2) << " ";
		std::cout << CData.at(3) << " ";
		std::cout << CData.at(4) << "\n";
	}
}

void	PhoneBook::Add(int id)
{
	++this->_count;
	this->_ct[id].CreateContact();
}
