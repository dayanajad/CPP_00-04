/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 16:43:57 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/05/25 17:22:10 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

static std::string	getInput(std::string prompt)
{
	std::string value;
	while (value.empty())
	{
		std::cout << prompt;
		if (!std::getline(std::cin, value))
			return "";
		if (value.empty())
			std::cout << "Field cannot be empty. Try again." << std::endl;
	}
	return (value);
}

static void	addRoutine(PhoneBook &pb)
{
	Contact	c;
	std::string	val;

	val = getInput("First Name:	");
	if (val.empty())
		return ;
	c.setFirstName(val);

	val = getInput("Last Name: ");
    if (val.empty())
        return ;
    c.setLastName(val);

	val = getInput("Nick Name: ");
    if (val.empty())
        return ;
    c.setNickName(val);

	val = getInput("Phone Number: ");
    if (val.empty())
        return ;
    c.setPhoneNumber(val);

	val = getInput("Darkest Secret: ");
    if (val.empty())
        return ;
    c.setDarkestSecret(val);

	pb.addContact(c);
}

int	main()
{
	PhoneBook	pb;
	std::string	command;

	while (true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command))
			break ;
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			addRoutine(pb);
		else if (command == "SEARCH")
			pb.searchContacts();
	}
	return (0);
}
