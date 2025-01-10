/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPoint.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fclivaz <fclivaz@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 20:32:40 by fclivaz           #+#    #+#             */
/*   Updated: 2025/01/08 17:43:13 by fclivaz          ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPOINT_HPP
# define CLASSPOINT_HPP

# include "ClassFixed.hpp"

class Point {
	private:
		const Fixed	x;
		const Fixed	y;

	public:
		Point(void);
		Point(float x1, float y1);
		Point(const Point& src);
		Point& operator=(const Point& src);
		~Point(void);
		const Fixed& getX(void);
		const Fixed& getY(void);
};

#endif // !CLASSPOINT_HPP
