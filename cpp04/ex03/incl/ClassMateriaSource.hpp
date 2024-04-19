/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassMateriaSource.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:44:23 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/19 21:59:09 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLASSMATERIASOURCE_HPP
# define CLASSMATERIASOURCE_HPP

# include "ClassIMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria*	_materias[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &src);
		MateriaSource &operator=(const MateriaSource &src);
		~MateriaSource();
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

MateriaSource::MateriaSource() {
}

MateriaSource::~MateriaSource() {
}	

#endif
