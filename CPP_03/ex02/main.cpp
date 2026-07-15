/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 19:15:27 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/15 19:29:36 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap frag("Robo");

	frag.attack("target dummy");
	frag.highFivesGuys();
	frag.takeDamage(50);
	frag.beRepaired(10);
	return (0);
}
