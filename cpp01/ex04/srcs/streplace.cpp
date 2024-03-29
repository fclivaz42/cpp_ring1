/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   streplace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 18:31:51 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/29 18:35:51 by fclivaz          ###    LAUSANNE.CH      */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/streplace.hpp"

int main (int ac, char *av[])
{
	if (ac < 3){
		std::cout << "Invalid amount of arguments.\nExptected: <filename> str_to_replace new_str\n";
		return 1;
	}
	std::cout << av << std::endl;
	return 0;
}
