/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 15:23:00 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/09 16:12:12 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Zombie created" << std::endl;
}

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << "Zombie" << _name << "created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << _name << " destroyed" << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
