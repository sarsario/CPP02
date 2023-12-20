/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:15:17 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/20 11:30:21 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"

class Point
{
public:
	// Constructors and destructor
	Point(void);
	~Point(void);

	// Copy constructor
	Point(Point const &src);

	// Other constructor
	Point(float const x, float const y);

	// Assignment operator (=)
	Point &operator=(Point const &rhs);

	Fixed getX(void) const;
	Fixed getY(void) const;

private:
	Fixed const _x;
	Fixed const _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif