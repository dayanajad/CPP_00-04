/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 01:39:26 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/16 02:23:19 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal(void);
		Animal(Animal const &src);
		Animal &operator=(Animal const &rhs);
		virtual ~Animal(void);

		std::string const &getType(void) const;
		virtual void makeSound(void) const;

	protected:
		std::string type;
};

#endif
