/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 21:25:31 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/12 04:02:07 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClapTrapClass.hpp"
#include "../incl/ScavTrapClass.hpp"

int main(void) {

	ClapTrap	mvillarr("Maria");
	ScavTrap	ilyanar("Ilkay");

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
	ilyanar.attack("Maria");
	mvillarr.takeDamage(20);
	return 0;
}
