/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 09:32:25 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/05/14 10:59:56 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
		{
			std::string arg = av[i];
			for (int j = 0; j < int(arg.length()); j++)
			{
				arg[j] = char(std::toupper((unsigned char)arg[j]));
				std::cout << arg[j];
			}
		}
		std::cout << std::endl;
	}
	return (0);
}

