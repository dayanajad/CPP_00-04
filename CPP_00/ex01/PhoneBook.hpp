/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 08:16:02 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/05/25 17:20:30 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook {
public:
	PhoneBook();
	void	addContact(Contact contact);
	void	searchContacts() const;

private:
	Contact	_contacts[8];
	int		_count;
	int		_nextIndex;
};

#endif
