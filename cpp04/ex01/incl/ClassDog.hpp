/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 20:54:23 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/15 20:52:22 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSDOG_HPP
# define CLASSDOG_HPP

# include "ClassAnimal.hpp"
#include "ClassBrain.hpp"

class Dog : public Animal {
	private:
		Brain	*_dogBrain;

	public:
		Dog(void);
		Dog(const Dog &src);
		Dog &operator=(const Dog &src);
		~Dog(void);
		void	makeSound(void) const;

};
#endif
