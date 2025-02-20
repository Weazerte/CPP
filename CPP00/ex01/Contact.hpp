/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:41:56 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/30 15:18:02 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

# include <iostream>
# include <string>
# include <limits>
# include <csignal>
# include <cstdlib>
# include <cstring>
# include <iomanip>

class	Contact
{
	private:
		std::string	FirstName;
		std::string	FirstNamecpy;
		std::string	LastName;
		std::string	LastNamecpy;
		std::string	NickName;
		std::string	NickNamecpy;
		std::string	PhoneNumber;
		std::string	Secret;
		int			Index;
	public:
		Contact(void);
		~Contact(void);
		std::string	GetFirstName(void) const;
		std::string	GetLastName(void) const;
		std::string	GetNickName(void) const;
		std::string	GetFirstNamecpy(void) const;
		std::string	GetLastNamecpy(void) const;
		std::string	GetNickNamecpy(void) const;
		std::string	GetPhoneNumber(void) const;
		std::string	GetSecret(void) const;
		int			GetIndex(void) const;
		void		SetFirstName(std::string str);
		void		SetLastName(std::string str);
		void		SetNickName(std::string str);
		void		SetFirstNamecpy(std::string str);
		void		SetLastNamecpy(std::string str);
		void		SetNickNamecpy(std::string str);
		void		SetPhoneNumber(std::string str);
		void		SetSecret(std::string str);
};

#endif