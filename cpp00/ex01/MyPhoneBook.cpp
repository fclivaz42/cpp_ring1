/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyPhoneBook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:03:29 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/11 14:01:31 by fclivaz          ###   LAUSANNE.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "incl/MyPhoneBook.hpp"

int main(void)
{	
	std::string	buf;
	PhoneBook book;
	char	id = 0;

	while (!std::cin.eof()) {
		if (id >= 8)
			id = 0;
		std::cout << "Command (ADD/SEARCH/EXIT) >> ";
		std::getline(std::cin, buf);
		if (!buf.compare("ADD")) {
			std::cout << "ADDING \n";
			book.Add(id);
			++id;
		}
		else if (!buf.compare("SEARCH")) {
			std::cout << "SEARCHING \n";
			book.Search();
		}
		else if (!buf.compare("EXIT")) {
			return(0);
		}
		else {
			std::cout << "Invalid command.\n";
		}
	}
}
