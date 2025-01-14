/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:13:57 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/30 15:04:18 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact	Contacts[8];
		int		Index;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	PrintInSearch(int i);
		void	Print(Contact contact);
		void	Search(void);
		void	Add(void);
		Contact	GetContact(int index);
};

#endif