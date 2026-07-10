/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 12:58:09 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/09 12:58:12 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

int main( void )
{
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();

    randomChump("StackZombie");

    delete heapZombie;
    return 0;
}
