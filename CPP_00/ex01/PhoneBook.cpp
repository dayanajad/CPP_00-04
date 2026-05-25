/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 16:14:41 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/05/25 17:31:06 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

PhoneBook::PhoneBook() : _count(0), _nextIndex(0) {}

void	PhoneBook::addContact(Contact contact)
{
	_contacts[_nextIndex] = contact;
	_nextIndex =(_nextIndex + 1) % 8;
	if (_count < 8)
		_count++;
}

static std::string	truncate(std::string s)
{
	if (s.length() > 10)
		return (s.substr(0, 9) + ".");
	return (s);
}

void	PhoneBook::searchContacts() const
{
	if (_count == 0)
	{
		std::cout << "PhoneBook is empty." << std::endl;
		return;
	}
	std::cout << std::right;
	for (int i = 0; i < _count; i++)
	{
		std::cout
		<< std::setw(10) << i << "|"
		<< std::setw(10) << truncate(_contacts[i].getFirstName()) << "|"
		<< std::setw(10) << truncate(_contacts[i].getLastName()) << "|"
		<< std::setw(10) << truncate(_contacts[i].getNickName()) << "|"
		<< std::endl;
	}
	std::string input;
	std::cout << "Enter Index: ";
	if (!std::getline(std::cin, input))
		return ;
	int idx;
	std::istringstream ss(input);
	if (!(ss >> idx) || !ss.eof())
	{
		std::cout << "Invalid Index." << std::endl;
		return ;
	}
	if (idx < 0 || idx >= _count)
	{
		std::cout << "Index out of range." << std::endl;
		return ;
	}
	std::cout << "First Name:		" << _contacts[idx].getFirstName() << std::endl;
	std::cout << "Last Name:		" << _contacts[idx].getLastName() << std::endl;
	std::cout << "Nick Name:		" << _contacts[idx].getNickName() << std::endl;
	std::cout << "Phone Number:		" << _contacts[idx].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret:	" << _contacts[idx].getDarkestSecret() << std::endl;
}
