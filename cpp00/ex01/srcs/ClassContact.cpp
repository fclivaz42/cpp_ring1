/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:27:22 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/22 20:31:41 by fclivaz          ###    LAUSANNE.CH      */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassContact.hpp"

Contact::Contact(void)
{
	this->init = 0;
}

Contact::~Contact(void)
{
}

std::string	Contact::UserInput(const std::string &text)
{
	std::string	buf;
	
	while (!std::cin.eof())
	{
		std::cout << text << ": ";
		std::getline(std::cin, buf);
		if (!buf.empty())
			break;
		else
			std::cout << "Please input a valid " << text << "!\n";
	}
	return (buf);
}

std::array<std::string, 5> Contact::GetUserData()
{
	std::array<std::string, 5>	Data;
	
	Data.at(0) = this->_FName;
	Data.at(1) = this->_LName;
	Data.at(2) = this->_NName;
	Data.at(3) = this->_number;
	Data.at(4) = this->_Secret;
	
	return Data;
}

void  Contact::CreateContact(void)
{
	this->_FName = UserInput("First name");
	this->_LName = UserInput("Last name");
	this->_NName = UserInput("Nickname");
	this->_number = UserInput("Number");
	this->_Secret = UserInput("Darkest secret");
	this->init = 1;
}
