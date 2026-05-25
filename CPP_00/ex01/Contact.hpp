/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbinti-m <dbinti-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 08:01:06 by dbinti-m          #+#    #+#             */
/*   Updated: 2026/05/25 08:12:50 by dbinti-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact {
public:
	void	setFirstName(std::string val);
	void	setLastName(std::string val);
	void	setNickName(std::string val);
	void	setPhoneNumber(std::string val);
	void	setDarkestSecret(std::string val);
	
	std::string	getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string	getPhoneNumber() const;
	std::string	getDarkestSecret() const;

private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
};

#endif
