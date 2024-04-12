/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrapClass.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:25:29 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/12 04:15:22 by fclivaz          ###   LAUSANNE.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAPCLASS_HPP
# define FRAGTRAPCLASS_HPP

#include "ClapTrapClass.hpp"
# include <string>
# include <iostream>
# define uint unsigned int

class FragTrap : public ClapTrap {
	public:
	/*			Constructors/Destructors			*/
		FragTrap(const std::string &name);
		FragTrap(FragTrap const &src);
		FragTrap &operator=(const FragTrap &src);
		~FragTrap(void);
	/*					Class Methods				*/
		void	attack(const std::string &target);
		void	highFivesGuys();
};

#endif
