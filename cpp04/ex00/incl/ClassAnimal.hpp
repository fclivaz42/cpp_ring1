/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 20:54:23 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/13 21:11:33 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSANIMAL_HPP
# define CLASSANIMAL_HPP

# include <string>

class Animal {
	protected:
		std::string	_type;
	
	public:
		Animal(void);
		Animal(const Animal &src);
		Animal &operator=(const Animal &src);
		~Animal(void);

};
#endif
