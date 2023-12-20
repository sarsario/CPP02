/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:45:05 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/20 10:55:09 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed(void);
	Fixed(Fixed const &src);
	Fixed(int const n);
	Fixed(float const n);
	~Fixed(void);

	Fixed &operator=(Fixed const &rhs);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

private:
	int _fixedPoint;
	static const int _fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif
