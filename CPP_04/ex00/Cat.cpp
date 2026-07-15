/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 01:42:15 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/16 02:03:33 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	type = "Cat";
	std::cout << "Cat default constructor called\n";
}

Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << "Cat copy constructor called\n";
}

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat copy assignment operator called\n";
	if (this != &rhs)
		Animal::operator=(rhs);
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called\n";
}

void Cat::makeSound(void) const
{
	std::cout << "Meow!\n";
}
