/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:47:21 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/20 10:49:58 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed::Fixed(int const n)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPoint = n << this->_fractionalBits;
    return;
}

Fixed::Fixed(float const n)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPoint = roundf(n * (1 << this->_fractionalBits));
    return;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_fixedPoint = rhs.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPoint = raw;
    return;
}

float Fixed::toFloat(void) const
{
    return ((float)this->_fixedPoint / (float)(1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
    return (this->_fixedPoint >> this->_fractionalBits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return (o);
}
