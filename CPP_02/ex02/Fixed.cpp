/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 17:30:34 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/13 22:23:19 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_fractBits = 8;

Fixed::Fixed(void) : _fixedPoint(0) {}

Fixed::Fixed(int const n)
{
	_fixedPoint = n << _fractBits;
}

Fixed::Fixed (float const n)
{
	_fixedPoint = roundf(n *  (1 << _fractBits));
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		_fixedPoint = rhs._fixedPoint;
	return (*this);
}

Fixed::~Fixed(void) {}

int Fixed::getRawBits(void) const
{
	return (_fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	_fixedPoint = raw;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(_fixedPoint) / (1 << _fractBits));
}

int Fixed::toInt(void) const
{
	return (_fixedPoint >> _fractBits);
}

bool Fixed::operator>(Fixed const &rhs) const
{
	return (_fixedPoint > rhs._fixedPoint);
}

bool Fixed::operator<(Fixed const &rhs) const
{
    return (_fixedPoint < rhs._fixedPoint);
}

bool Fixed::operator>=(Fixed const &rhs) const
{
    return (_fixedPoint >= rhs._fixedPoint);
}

bool Fixed::operator<=(Fixed const &rhs) const
{
    return (_fixedPoint <= rhs._fixedPoint);
}

bool Fixed::operator==(Fixed const &rhs) const
{
    return (_fixedPoint == rhs._fixedPoint);
}

bool Fixed::operator!=(Fixed const &rhs) const
{
    return (_fixedPoint != rhs._fixedPoint);
}

Fixed Fixed::operator+(Fixed const &rhs) const
{
	Fixed result;
	result.setRawBits(_fixedPoint + rhs._fixedPoint);
	return (result);
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	Fixed result;
	result.setRawBits(_fixedPoint - rhs._fixedPoint);
	return (result);
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	Fixed result;
	result.setRawBits((_fixedPoint * rhs._fixedPoint) >> _fractBits);
	return (result);
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	Fixed result;
	result.setRawBits((_fixedPoint << _fractBits) / rhs._fixedPoint);
	return (result);
}

Fixed &Fixed::operator++(void)
{
	_fixedPoint++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	_fixedPoint++;
	return (temp);
}

Fixed &Fixed::operator--(void)
{
    _fixedPoint--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    _fixedPoint--;
    return (temp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return(a < b ? a : b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return(a > b ? a : b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    return (a > b ? a : b);
}

std::ostream &operator<<(std::ostream &out, Fixed const &f)
{
	out << f.toFloat();
	return (out);
}
