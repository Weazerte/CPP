/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:41:58 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/30 15:17:42 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string	Contact::GetFirstName(void) const
{
	return (this->FirstName);
}

std::string	Contact::GetLastName(void) const
{
	return (this->LastName);
}

std::string	Contact::GetNickName(void) const
{
	return (this->NickName);
}

std::string	Contact::GetFirstNamecpy(void) const
{
	return (this->FirstNamecpy);
}

std::string	Contact::GetLastNamecpy(void) const
{
	return (this->LastNamecpy);
}

std::string	Contact::GetNickNamecpy(void) const
{
	return (this->NickNamecpy);
}

std::string	Contact::GetPhoneNumber(void) const
{
	return (this->PhoneNumber);
}

std::string	Contact::GetSecret(void) const
{
	return (this->Secret);
}

int	Contact::GetIndex(void) const
{
	return (this->Index);
}

void	Contact::SetFirstName(std::string str)
{
	this->FirstName = str;
}

void	Contact::SetLastName(std::string str)
{
	this->LastName = str;
}

void	Contact::SetNickName(std::string str)
{
	this->NickName = str;
}
void	Contact::SetFirstNamecpy(std::string str)
{
	this->FirstNamecpy = str;
}

void	Contact::SetLastNamecpy(std::string str)
{
	this->LastNamecpy = str;
}

void	Contact::SetNickNamecpy(std::string str)
{
	this->NickNamecpy = str;
}

void	Contact::SetPhoneNumber(std::string str)
{
	this->PhoneNumber = str;
}

void	Contact::SetSecret(std::string str)
{
	this->Secret = str;
}