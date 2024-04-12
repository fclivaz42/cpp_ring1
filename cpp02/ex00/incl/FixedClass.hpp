/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedClass.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 20:42:14 by fclivaz           #+#    #+#             */
/*   Updated: 2024/04/05 18:47:56 by fclivaz          ###   LAUSANNE.CH       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXEDCLASS_HPP
# define FIXEDCLASS_HPP

# include <iostream>

class Fixed {
	private:
	int					_fixedNumber;
	const static int	_fixedPoint = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &src);
		Fixed& operator=(const Fixed &src);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const rawBits);
};

#endif
