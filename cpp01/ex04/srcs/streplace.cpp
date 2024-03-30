/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   streplace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 18:31:51 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/30 17:16:47 by fclivaz          ###    LAUSANNE.CH      */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/streplace.hpp"
#include <string>

int main (int ac, char *av[])
{
	std::string	path;
	std::string	oldstr;
	std::string	newstr;

	if (ac != 4){
		std::cout << "Invalid amount of arguments.\nExptected: <filename> \"str_to_replace\" \"new_str\"\n";
		return 1;
	}

	path = av[1];
	oldstr = av[2];
	newstr = av[3];
	std::cout << "oldstr " << oldstr << "\n";
	std::cout << "newstr " << newstr << "\n";
	return 0;
}
