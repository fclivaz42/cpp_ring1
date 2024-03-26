/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:41:40 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/26 19:01:51 by fclivaz          ###   LAUSANNE.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLASSPHONEBOOK_H__
# define __CLASSPHONEBOOK_H__

# include "ClassContact.hpp"
# include <string>
# include <stdlib.h>
# include <iostream>
# include <iomanip>

class PhoneBook
{
	private:
		char	_count;
		Contact _ct[8];
		void DisplayContact(int id);
		void NewLine(const std::string &separator);
		void PrintContent(const std::string &ID,
							const std::string &Name,
							const std::string &LName,
							const std::string &NName,
							const std::string &Separator);
	
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void Search(void);
		void Add(int id);
};

#endif
