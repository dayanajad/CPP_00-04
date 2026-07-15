/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 19:15:27 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/14 21:09:45 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap weak("Grunt");
	ScavTrap strong("Serena");

	weak.attack("target dummy");
	strong.attack("target dummy");
	strong.guardGate();
	strong.takeDamage(10);
	strong.beRepaired(5);

	return (0);
}
