/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   streplace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 18:31:51 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/30 17:25:29 by fclivaz          ###    LAUSANNE.CH      */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/streplace.hpp"
#include <string>

int main (int ac, char *av[])
{
	if (ac != 4){
		std::cout << "Invalid amount of arguments.\nExptected: <filename> \"str_to_replace\" \"new_str\"\n";
		return 1;
	}

	const std::string	path = av[1];
	const std::string	oldstr = av[2];
	const std::string	newstr = av[3];
	
	return 0;
}
