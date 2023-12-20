/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:45:05 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/20 11:14:25 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
public:
	// Constructors and destructor
	Fixed(void);
	Fixed(Fixed const &src);
	Fixed(int const n);
	Fixed(float const n);
	~Fixed(void);

	// Assignment operator (=)
	Fixed &operator=(Fixed const &rhs);

	// Arithmetic operators (+, -, *, /)
	Fixed operator+(Fixed const &rhs) const;
	Fixed operator-(Fixed const &rhs) const;
	Fixed operator*(Fixed const &rhs) const;
	Fixed operator/(Fixed const &rhs) const;

	// Increment and decrement operators (++a, a++, --a, a--)
	Fixed &operator++(void);
	Fixed operator++(int);
	Fixed &operator--(void);
	Fixed operator--(int);

	// Comparison operators (>, <, >=, <=, ==, !=)
	bool operator>(Fixed const &rhs) const;
	bool operator<(Fixed const &rhs) const;
	bool operator>=(Fixed const &rhs) const;
	bool operator<=(Fixed const &rhs) const;
	bool operator==(Fixed const &rhs) const;
	bool operator!=(Fixed const &rhs) const;

	// Min and max functions (min(a, b) and max(a, b))
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static Fixed const &min(Fixed const &a, Fixed const &b);
	static Fixed const &max(Fixed const &a, Fixed const &b);

	// Getters and setters
	int getRawBits(void) const;
	void setRawBits(int const raw);

	// toFloat and toInt functions
	float toFloat(void) const;
	int toInt(void) const;

private:
	int _fixedPoint;
	static const int _fractionalBits = 8;
};

// Insertion operator (<<)

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif
