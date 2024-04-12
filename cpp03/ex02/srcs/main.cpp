/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:25:31 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/12 15:55:37 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClapTrapClass.hpp"
#include "../incl/ScavTrapClass.hpp"
#include "../incl/FragTrapClass.hpp"

int main(void) {

	ClapTrap	mvillarr("Maria");
	ScavTrap	ilyanar("Ilkay");
	FragTrap	fclivaz("Fabien");

	// ...Whatever this is.
	mvillarr.beRepaired(30);
	ilyanar.guardGate();
	mvillarr.attack("Ilkay");
	ilyanar.takeDamage(5);
	ilyanar.attack("Maria");
	mvillarr.takeDamage(20);
	mvillarr.beRepaired(3);
	ilyanar.attack("Maria");
	mvillarr.takeDamage(20);
	mvillarr.beRepaired(1);
	mvillarr.beRepaired(1);
	mvillarr.beRepaired(1);
	mvillarr.beRepaired(1);
	mvillarr.beRepaired(1);
	mvillarr.beRepaired(1);
	mvillarr.beRepaired(1);
	mvillarr.beRepaired(1);
	mvillarr.beRepaired(1);
	mvillarr.beRepaired(1);
	fclivaz.highFivesGuys();
	ilyanar.attack("Maria");
	mvillarr.takeDamage(20);
	fclivaz.attack("Ilkay");
	ilyanar.takeDamage(30);
	ilyanar.attack("Fabien");
	fclivaz.takeDamage(20);
	fclivaz.attack("Ilkay");
	ilyanar.takeDamage(30);
	ilyanar.attack("Fabien");
	fclivaz.takeDamage(20);
	fclivaz.attack("Ilkay");
	ilyanar.takeDamage(30);
	ilyanar.attack("Fabien");
	fclivaz.takeDamage(20);
	fclivaz.attack("Ilkay");
	ilyanar.takeDamage(30);
	fclivaz.highFivesGuys();
	return 0;
}
