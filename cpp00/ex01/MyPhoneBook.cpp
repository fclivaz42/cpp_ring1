/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyPhoneBook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:03:29 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/04 16:02:50 by fclivaz          ###    LAUSANNE.CH      */
/*                                                                            */
/* ************************************************************************** */

#include "MyPhoneBook.hpp"

int main(void)
{	
	std::string	buf;
	PhoneBook book;

	while (1) {
		std::cin >> buf;
		if (!buf.compare("ADD"))
			std::cout << "ADDING" << std::endl;
		else if (!buf.compare("SEARCH"))
			std::cout << "SEARCHING" << std::endl;
		else if (!buf.compare("EXIT")) {

			return(0);
		}
	}
}
