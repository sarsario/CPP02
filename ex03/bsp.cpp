/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:28:51 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/20 11:31:34 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed const x = point.getX();
	Fixed const y = point.getY();
	Fixed const x1 = a.getX();
	Fixed const y1 = a.getY();
	Fixed const x2 = b.getX();
	Fixed const y2 = b.getY();
	Fixed const x3 = c.getX();
	Fixed const y3 = c.getY();

	Fixed const a1 = ((y2 - y1) * (x - x1)) - ((x2 - x1) * (y - y1));
	Fixed const a2 = ((y3 - y2) * (x - x2)) - ((x3 - x2) * (y - y2));
	Fixed const a3 = ((y1 - y3) * (x - x3)) - ((x1 - x3) * (y - y3));

	if ((a1 >= 0 && a2 >= 0 && a3 >= 0) || (a1 <= 0 && a2 <= 0 && a3 <= 0))
		return (true);
	return (false);
}
