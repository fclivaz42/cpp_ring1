/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:04:21 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/15 20:45:42 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ClassDog.hpp"
#include "../incl/ClassCat.hpp"

void	realAnimals()
{
	Animal	blobOfCells;
	Cat	kitty;
	Dog	doggo;
	
	std::cout << blobOfCells.getType() << std::endl;
	std::cout << kitty.getType() << std::endl;
	std::cout << doggo.getType() << std::endl;
	blobOfCells.makeSound();
	doggo.makeSound();
	kitty.makeSound();
}

void	fileTests()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;
}

int main (void)
{
	std::cout << "------------- ANIMALS -------------\n";
	realAnimals();
	std::cout << "------------- FILE TESTS -------------\n";
	fileTests();
	return 0;
}
