/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:41:40 by fclivaz           #+#    #+#             */
/*   Updated: 2024/03/11 14:35:50 by fclivaz          ###   LAUSANNE.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPHONEBOOK_HPP
# define CLASSPHONEBOOK_HPP

# include "ClassContact.hpp"

class PhoneBook
{
	private:
		char	_count;
		Contact _ct[8];
	
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void Search(void);
		void Add(int id);
};

#endif
