/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 17:55:33 by fclivaz           #+#    #+#             */
/*   Updated: 2023/12/16 18:02:00 by fclivaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>
class Contact {

public:
	CreateContact(std::string FName, std::string LName, std::string SName, int Number, std::string, std::string Secret);
};

#endif
