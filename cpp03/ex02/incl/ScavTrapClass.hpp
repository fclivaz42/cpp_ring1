/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrapClass.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:25:29 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/12 03:32:38 by fclivaz          ###   LAUSANNE.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAPCLASS_HPP
# define SCAVTRAPCLASS_HPP

#include "ClapTrapClass.hpp"
# include <string>
# include <iostream>
# define uint unsigned int

class ScavTrap : public ClapTrap {
	public:
	/*			Constructors/Destructors			*/
		ScavTrap(const std::string &name);
		ScavTrap(ScavTrap const &src);
		ScavTrap &operator=(const ScavTrap &src);
		~ScavTrap(void);
	/*					Class Methods				*/
		void	attack(const std::string &target);
		void	guardGate();
};

#endif
