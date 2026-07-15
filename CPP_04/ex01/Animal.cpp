/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 01:42:15 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/16 02:10:52 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal default constructor called\n";
}

Animal::Animal(Animal const &src) : type(src.type)
{
	std::cout << "Animal copy constructor called\n";
}

Animal &Animal::operator=(Animal const &rhs)
{
	std::cout << "Animal copy assignment operator called\n";
	if (this != &rhs)
		type = rhs.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called\n";
}

std::string const &Animal::getType(void) const
{
	return (type);
}

void Animal::makeSound(void) const
{
	std::cout << "...(generic animal noise)\n";
}
