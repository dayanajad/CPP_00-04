/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 19:15:27 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/14 19:17:51 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Sandy");
	ClapTrap b("TwinkleWinkle");

	a.attack("TwinkleWinkle");
	b.takeDamage(0);
	b.beRepaired(2);

	for (int i = 0; i < 10; i++)
		a.attack("TwinkleWinkle");
	return (0);
}
