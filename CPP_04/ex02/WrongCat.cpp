/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 01:42:15 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/16 02:27:24 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat default constructor called\n";
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor called\n";
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	std::cout << "WrongCat copy assignment operator called\n";
	if (this != &rhs)
		WrongAnimal::operator=(rhs);
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called\n";
}

void WrongCat::makeSound(void) const
{
	std::cout << "Meow! (but you'll never see this through WrongAnimal\n";
}
