/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyPhoneBook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:03:29 by fclivaz           #+#    #+#             */
/*   Updated: 2023/12/16 18:02:13 by fclivaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

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

			exit(0);
		}
	}
}
