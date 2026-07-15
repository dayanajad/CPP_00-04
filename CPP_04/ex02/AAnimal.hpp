/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 01:39:26 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/16 05:07:11 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
	public:
		AAnimal(void);
		AAnimal(AAnimal const &src);
		AAnimal &operator=(AAnimal const &rhs);
		virtual ~AAnimal(void);

		std::string const &getType(void) const;
		virtual void makeSound(void) const = 0; 

	protected:
		std::string type;
};

#endif
