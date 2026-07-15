/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 01:42:15 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/16 02:04:23 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	type = "Dog";
	std::cout << "Dog default constructor called\n";
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << "Dog copy constructor called\n";
}

Dog &Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog copy assignment operator called\n";
	if (this != &rhs)
		Animal::operator=(rhs);
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called\n";
}

void Dog::makeSound(void) const
{
	std::cout << "Woof!\n";
}
