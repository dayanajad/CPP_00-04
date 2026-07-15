/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 01:49:14 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/16 05:15:08 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal
{
	public:
		Dog(void);
		Dog(Dog const &src);
		Dog &operator=(Dog const &rhs);
		~Dog(void);

		void makeSound(void) const;
		Brain *getBrain(void) const;

	private:
		Brain *_brain;
};

#endif
