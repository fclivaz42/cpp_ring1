/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCharacter.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:28:36 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/19 21:42:15 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLASSCHARACTER_HPP
# define CLASSCHARACTER_HPP

#include "ClassICharacter.hpp"
#include "ClassMateriaIce.hpp"
#include "ClassMateriaFire.hpp"
#include "ClassMateriaCure.hpp"

class Character : public ICharacter {
	private:
		AMateria*	_slots[4];	
		std::string	_name;
		Character();
		
	public:
		Character(const std::string& Name);
		Character(const Character& src);
		Character &operator=(const Character& src);
		~Character();

		const std::string&	getName(void) const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);


};

#endif
