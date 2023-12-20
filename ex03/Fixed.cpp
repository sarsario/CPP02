/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:47:21 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/20 11:33:49 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors and destructor

Fixed::Fixed(void) : _fixedPoint(0)
{
	return;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
	return;
}

Fixed::Fixed(int const n)
{
	this->_fixedPoint = n << this->_fractionalBits;
	return;
}

Fixed::Fixed(float const n)
{
	this->_fixedPoint = roundf(n * (1 << this->_fractionalBits));
	return;
}

Fixed::~Fixed(void)
{
	return;
}

// Assignment operator (=)

Fixed &Fixed::operator=(Fixed const &rhs)
{
	this->_fixedPoint = rhs.getRawBits();
	return (*this);
}

// Arithmetic operators (+, -, *, /)

Fixed Fixed::operator+(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

// Increment and decrement operators (++a, a++, --a, a--)
// Prefix increment operator (++a)

Fixed &Fixed::operator++(void)
{
	this->_fixedPoint++;
	return (*this);
}

// Postfix increment operator (a++)

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

// Prefix decrement operator (--a)

Fixed &Fixed::operator--(void)
{
	this->_fixedPoint--;
	return (*this);
}

// Postfix decrement operator (a--)

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

// Comparison operators (>, <, >=, <=, ==, !=)

bool Fixed::operator>(Fixed const &rhs) const
{
	return (this->_fixedPoint > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return (this->_fixedPoint < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return (this->_fixedPoint >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return (this->_fixedPoint <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return (this->_fixedPoint == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return (this->_fixedPoint != rhs.getRawBits());
}

// Min and max functions (min(a, b) and max(a, b))

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}

// Getters and setters

int Fixed::getRawBits(void) const
{
	return (this->_fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
	return;
}

// toFloat and toInt functions

float Fixed::toFloat(void) const
{
	return ((float)this->_fixedPoint / (float)(1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
	return (this->_fixedPoint >> this->_fractionalBits);
}

// << operator overload

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}
