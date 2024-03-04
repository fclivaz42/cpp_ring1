/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:55:33 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/04 17:25:35 by fclivaz          ###    LAUSANNE.CH      */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACT_H
# define CLASSCONTACT_H

# include "MyPhoneBook.hpp"

class Contact
{
private:
	int	_number;
	std::string	_FName;
	std::string	_LName;
	std::string	_NName;
	std::string	_Secret;
	void CreateContact(std::string FName, std::string LName, std::string NName, int Number, std::string Secret);

public:
	int	id;
	Contact(void);
	~Contact(void);
	void NewContact(void);
};

#endif
