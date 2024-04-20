/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:12:17 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/20 21:43:22 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

# include "../incl/ClassMateriaCure.hpp"
# include "../incl/ClassMateriaIce.hpp"
# include "../incl/ClassCharacter.hpp"
# include "../incl/ClassMateriaSource.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	ICharacter* jesus = new Character("Jesus");
	me->use(0, *bob);
	me->use(1, *jesus);
	delete src;
	delete bob;
	delete me;
	delete jesus;
	return 0;
}
