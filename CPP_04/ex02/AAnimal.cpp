/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 01:42:15 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/16 05:08:05 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("AAnimal")
{
	std::cout << "AAnimal default constructor called\n";
}

AAnimal::AAnimal(AAnimal const &src) : type(src.type)
{
	std::cout << "AAnimal copy constructor called\n";
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
	std::cout << "AAnimal copy assignment operator called\n";
	if (this != &rhs)
		type = rhs.type;
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called\n";
}

std::string const &AAnimal::getType(void) const
{
	return (type);
}
