/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:26:57 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/20 11:31:30 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Constructors and destructor

Point::Point(void) : _x(0), _y(0)
{
	return;
}

Point::~Point(void)
{
	return;
}

Point::Point(Point const &src) : _x(src.getX()), _y(src.getY())
{
	return;
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
	return;
}

// Assignment operator (=)

Point &Point::operator=(Point const &rhs)
{
	(void)rhs;
	return (*this);
}

// Getters

Fixed Point::getX(void) const
{
	return (this->_x);
}

Fixed Point::getY(void) const
{
	return (this->_y);
}
