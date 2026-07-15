/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 01:42:15 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/16 04:11:31 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called\n";
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain copy constructor called\n";
	*this = src;
}

Brain &Brain::operator=(Brain const &rhs)
{
	std::cout << "Brain copy assignment operator called\n";
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = rhs.ideas[i];
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called\n";
}

void Brain::setIdea(unsigned int idx, std::string const &idea)
{
	if (idx < 100)
		ideas[idx] = idea;
}

std::string Brain::getIdea(unsigned int idx) const
{
	if (idx < 100)
		return (ideas[idx]);
	return ("");
}
