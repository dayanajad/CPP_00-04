/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 12:58:53 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/09 12:58:58 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name)
{
    std::cout << "Zombie " << _name << " created" << std::endl;
}

Zombie::~Zombie( void )
{
    std::cout << _name << ": destroyed" << std::endl;
}

void Zombie::announce( void )
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
