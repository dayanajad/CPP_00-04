/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 19:56:23 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/10 20:15:34 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

const std::string &Weapon::getType(void) const
{
	return (_type);
}

void Weapon::setType(std::string type)
{
	_type = type;
}
