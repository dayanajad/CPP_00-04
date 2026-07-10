/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 20:06:33 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/10 20:09:44 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void HumanB::attack(void) const
{
	if (!_weapon)
	{
		std::cout << _name << " has no weapon!" << std::endl;
		return ;
	}
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
