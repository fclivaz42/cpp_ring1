/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 19:52:29 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/30 16:36:41 by fclivaz          ###    LAUSANNE.CH      */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void	Harl::complain(std::string level)
{
	const f	pLevels[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	const std::string	levels[4] = {"debug", "info", "warning", "error"};
	
	for (int i = 0; i < 4; i++) {
		if (!level.compare(levels[i])) {
			(this->*pLevels[i])();
			return ;
		}
	}
	std::cout << "What do you mean this doesn't exist?!\n";
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void	Harl::error(void)
{
	std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now.\n";
}
