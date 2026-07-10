/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 13:34:35 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/07/10 13:57:25 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address of string	: " << &str << std::endl;
	std::cout << "Address of stringPTR	: " << stringPTR << std::endl;
	std::cout << "Address of stringREF	: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Value of string		: " << str << std::endl;
	std::cout << "Value of stringPTR	: " << *stringPTR << std::endl;
	std::cout << "Value of stringREF	: " << stringREF << std::endl;

	return (0);
}


