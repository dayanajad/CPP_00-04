/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 03:54:39 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/16 04:23:43 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const &src);
		Brain &operator=(Brain const &rhs);
		~Brain(void);

		void setIdea(unsigned int idx, std::string const &idea);
		std::string getIdea(unsigned int idx) const;

	private:
		std::string ideas[100];
};

#endif
