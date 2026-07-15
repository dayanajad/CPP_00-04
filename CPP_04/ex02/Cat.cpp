/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 01:42:15 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/16 05:16:30 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal(), _brain(new Brain())
{
	type = "Cat";
	std::cout << "Cat default constructor called\n";
}

Cat::Cat(Cat const &src) : AAnimal(src), _brain(new Brain(*src._brain))
{
	std::cout << "Cat copy constructor called\n";
}

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat copy assignment operator called\n";
	if (this != &rhs)
	{
		AAnimal::operator=(rhs);
		*_brain = *rhs._brain;
	}
	return (*this);
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "Cat destructor called\n";
}

void Cat::makeSound(void) const
{
	std::cout << "Meow!\n";
}

Brain *Cat::getBrain(void) const
{
	return (_brain);
}
