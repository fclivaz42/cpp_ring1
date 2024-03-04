/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:41:40 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/04 17:25:37 by fclivaz          ###    LAUSANNE.CH      */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPHONEBOOK_H
# define CLASSPHONEBOOK_H

# include "MyPhoneBook.hpp"

class Contact;

class PhoneBook
{
	Contact contacts[8];
	
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void Search(void);
};

#endif
