/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassMateriaIce.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:21:39 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/19 21:29:57 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSMATERIACURE_HPP
# define CLASSMATERIACURE_HPP

#include "ClassAMateria.hpp"

class Ice : public AMateria{
	public:
		Ice(void);
		Ice(const Ice &src);
		Ice &operator=(const Ice &src);
		~Ice(void);

		AMateria*	clone(void) const;
		void		use(ICharacter& target);
};

#endif
