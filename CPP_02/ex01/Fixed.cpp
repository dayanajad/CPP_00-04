/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 17:30:34 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/12 18:41:30 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_fractBits = 8;

Fixed::Fixed(void) : _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedPoint = n << _fractBits;
}

Fixed::Fixed (float const n)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedPoint = roundf(n *  (1 << _fractBits));
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		_fixedPoint = rhs._fixedPoint;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

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

std::ostream &operator<<(std::ostream &out, Fixed const &f)
{
	out << f.toFloat();
	return (out);
}
