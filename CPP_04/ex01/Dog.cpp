/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 01:42:15 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/16 04:45:14 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal(), _brain(new Brain())
{
	type = "Dog";
	std::cout << "Dog default constructor called\n";
}

Dog::Dog(Dog const &src) : Animal(src), _brain(new Brain(*src._brain))
{
	std::cout << "Dog copy constructor called\n";
}

Dog &Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog copy assignment operator called\n";
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		*_brain = *rhs._brain;
	}
	return (*this);
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "Dog destructor called\n";
}

void Dog::makeSound(void) const
{
	std::cout << "Woof!\n";
}

Brain *Dog::getBrain(void) const
{
	return (_brain);
}
