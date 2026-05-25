/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 08:39:36 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/05/25 17:37:06 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(std::string val) { _firstName = val; }

void	Contact::setLastName(std::string val) { _lastName = val; }

void	Contact::setNickName(std::string val) { _nickName = val; }

void	Contact::setPhoneNumber(std::string val) { _phoneNumber = val; }

void	Contact::setDarkestSecret(std::string val) { _darkestSecret = val; }

std::string Contact::getFirstName() const { return (_firstName); }

std::string Contact::getLastName() const { return (_lastName); }

std::string Contact::getNickName() const { return (_nickName); }

std::string Contact::getPhoneNumber() const { return (_phoneNumber); }

std::string Contact::getDarkestSecret() const { return (_darkestSecret); }
