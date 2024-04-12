/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrapClass.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:25:29 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/12 17:22:07 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAPCLASS_HPP
# define DIAMONDTRAPCLASS_HPP

# include "ScavTrapClass.hpp"
# include "FragTrapClass.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string	_name;

	public:
	/*			Constructors/Destructors			*/
		DiamondTrap(const std::string &name);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap &operator=(const DiamondTrap &src);
		~DiamondTrap(void);
	/*					Class Methods				*/
		using	ScavTrap::attack;
		void	whoAmI(void);
};

#endif
