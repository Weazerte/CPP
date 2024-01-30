/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 21:46:30 by eaubry            #+#    #+#             */
/*   Updated: 2024/01/30 15:37:01 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->Index = 0;
	std::cout << "PhoneBook : 1 to 8 contact" << std::endl;
}

PhoneBook::~PhoneBook(void){}

void	PhoneBook::Print(Contact contact)
{
	std::cout << std::endl << "Requesting contact information..." << std::endl;
	if (!contact.GetFirstName().size())
	{
		std::cout << "Failed to get info for this contact" << std::endl;
		return ;
	}
	std::cout << "First Name: " << contact.GetFirstName() << std::endl;
	std::cout << "Last Name: " << contact.GetLastName() << std::endl;
	std::cout << "Nickname: " << contact.GetNickName() << std::endl;
	std::cout << "Phone Number: " << contact.GetPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.GetSecret() << std::endl;
}

void	PhoneBook::PrintInSearch(int i)
{
	std::cout << std::setw(10) << i << "|";
    std::cout << std::setw(10) << this->Contacts[i].GetFirstNamecpy() << "|";
    std::cout << std::setw(10) << this->Contacts[i].GetLastNamecpy() << "|";
    std::cout << std::setw(10) << this->Contacts[i].GetNickNamecpy() << "|";
    std::cout << std::endl;
}

void	PhoneBook::Search(void)
{
	std::string	str;
	int	range = 0;
	if (Index >= 8)
		range = 8;
	else 
		range = (Index % 8);
	std::cout << std::setw(10) << "index" << "|";
    std::cout << std::setw(10) << "first name" << "|";
    std::cout << std::setw(10) << "last name" << "|";
    std::cout << std::setw(10) << "nickname" << "|\n";
	for(int i = 0; i < range; i++)
		PrintInSearch(i);
	std::cout << "choose a contact by his index"<< std::endl;
	std::getline(std::cin, str);
	if (std::cin.eof())
        	std::exit(0);
	if (std::isdigit(str[0]) && str[1] == 0)
	{
		int ValueIndex = std::atoi(str.c_str());
		if (ValueIndex <= 7)
		{
			std::cout << "First Name : " << Contacts[ValueIndex].GetFirstName() << std::endl;
			std::cout << "Last Name : " << Contacts[ValueIndex].GetLastName() << std::endl;
			std::cout << "Nick Name : " << Contacts[ValueIndex].GetNickName() << std::endl;
			std::cout << "Phone Number : " << Contacts[ValueIndex].GetPhoneNumber() << std::endl;
			std::cout << "Darkest Secret : " << Contacts[ValueIndex].GetSecret() << std::endl << std::endl;
		}
	}
	else
	{
		std::cout << "incorrect index" << std::endl;
		PhoneBook::Search();
	}
}

void PhoneBook::Add()
{
	std::string cpy;
	std::string	str;
	std::cout << "What's your first name ?" << std::endl;
	std::getline(std::cin, str);
	if (std::cin.eof())
		std::exit(0);
	cpy = str;
	Contacts[Index % 8].SetFirstName(str);
	if (str.size() > 9)
		cpy = str.substr(0,9) + ".";
	Contacts[Index % 8].SetFirstNamecpy(cpy);
	std::cout << "What's your last name ?" << std::endl;
	std::getline(std::cin, str);
	if (std::cin.eof())
		std::exit(0);
	cpy = str;
	Contacts[Index % 8].SetLastName(str);
	if (str.size() > 9)
		cpy = str.substr(0,9) + ".";
	Contacts[Index % 8].SetLastNamecpy(cpy);
	std::cout << "What's your nick name ?" << std::endl;
	std::getline(std::cin, str);
	if (std::cin.eof())
		std::exit(0);
	cpy = str;
	Contacts[Index % 8].SetNickName(str);
	if (str.size() > 9)
		cpy = str.substr(0,9) + ".";
	Contacts[Index % 8].SetNickNamecpy(cpy);
	std::cout << "What's your phone number ?" << std::endl;
	std::getline(std::cin, str);
	if (std::cin.eof())
		std::exit(0);
	Contacts[Index % 8].SetPhoneNumber(str);
	std::cout << "Tell me your darkest secret ?" << std::endl;
	std::getline(std::cin, str);
	if (std::cin.eof())
		std::exit(0);
	Contacts[Index % 8].SetSecret(str);
	Index++;
}