/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 20:06:42 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/26 20:58:41 by fclivaz          ###   LAUSANNE.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Account.hpp"
#include <chrono>
#include <ctime>
#include <iomanip>
#include <iostream>

Account::Account(int initial_deposit)
{
	this->_totalAmount = initial_deposit;
	this->_nbDeposits = 1;
}


Account::~Account(void)
{
}

void	Account::displayAccountsInfos(void)
{
	std::time_t tt = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
	struct std::tm *ptm = std::localtime(&tt);
	std::cout << "["
		<< std::put_time(ptm, "%Y%m%d") << "_"
		<< std::put_time(ptm, "%H%M%S") << "] ";

}
