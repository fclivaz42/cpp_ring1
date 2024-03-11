/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:55:33 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/11 14:29:28 by fclivaz          ###   LAUSANNE.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP

#include <array>
# include <string>
# include <iostream>
# include <iomanip>

class Contact
{
	private:
		std::string	_number;
		std::string	_FName;
		std::string	_LName;
		std::string	_NName;
		std::string	_Secret;
		std::string UserInput(const std::string &text);

	public:
		char		init;
		Contact(void);
		~Contact(void);
		std::array<std::string, 5> GetUserData();
		void  CreateContact(void);
};

#endif
