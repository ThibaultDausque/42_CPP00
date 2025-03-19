/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 20:44:43 by thibault          #+#    #+#             */
/*   Updated: 2025/03/19 16:23:06 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::get_contact(void)
{
	std::string	input;
	int			id;
	
	while (1)
	{
		std::cout << "Enter an id (tap \"y\" to quit) > ";
		std::getline(std::cin, input);
		if (input == "y")
			break ;
		if (!input.empty())
		{
			try
			{
				id = std::stoi(input) - 1;
			}
			catch (std::exception &e)
			{
				std::cout << "It must be a number" << std::endl;
				input.clear();
				continue ;
			}
		}
		if (id >= 0 && id <= 7)
		{
			std::cout << std::endl;
			std::cout << "first name: ";
			std::cout << m_contact[id].get_fname() << std::endl;
			std::cout << "last name: ";
			std::cout << m_contact[id].get_lname() << std::endl;
			std::cout << "nickname: ";
			std::cout << m_contact[id].get_nname() << std::endl;
			std::cout << "phone number: ";
			std::cout << m_contact[id].get_num() << std::endl;
			std::cout << "darkest secret: ";
			std::cout << m_contact[id].get_darksec() << std::endl;
			std::cout << std::endl;
			input.clear();
		}
		else
			std::cout << "Must be between 1 & 8" << std::endl;
	}
}

// dessiner le tableau
void	PhoneBook::search_contact(void)
{
	int		i;

	i = 0;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|  index   |first name|last name | nickname |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (i < 8)
	{
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << i + 1;
		std::cout << "|";
		if (m_contact[i].get_fname().size() <= 10)
		{
			std::cout << std::setw(10);
			std::cout << m_contact[i].get_fname();
		}
		else if (m_contact[i].get_fname().size() > 10)
		{
			std::cout << m_contact[i].get_fname().substr(0, 9);
			std::cout << ".";
		}
		std::cout << "|";
		if (m_contact[i].get_lname().size() <= 10)
		{
			std::cout << std::setw(10);
			std::cout << m_contact[i].get_lname();
		}
		else if (m_contact[i].get_lname().size() > 10)
		{
			std::cout << m_contact[i].get_lname().substr(0, 9);
			std::cout << ".";
		}
		std::cout << "|";
		if (m_contact[i].get_nname().size() <= 10)
		{
			std::cout << std::setw(10);
			std::cout << m_contact[i].get_nname();
		}
		else if (m_contact[i].get_nname().size() > 10)
		{
			std::cout << m_contact[i].get_nname().substr(0, 9);
			std::cout << ".";
		}
		std::cout << "|";
		std::cout << std::endl;
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
	get_contact();
}

std::string	get_input(std::string prompt)
{
	std::string	input;

	while(input.empty())
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if (input.empty())
		{
			std::cout << "can't be empty";
			std::cout << std::endl;
			input.clear();
		}
	}
	return (input);
}

void	PhoneBook::add_contact(void)
{
	Contact		new_contact;
	static int	i = 0;

	new_contact.set_fname(get_input("first name: "));
	new_contact.set_lname(get_input("last name: "));
	new_contact.set_nname(get_input("nickname: "));
	new_contact.set_num(get_input("number phone: "));
	new_contact.set_darksec(get_input("darkest secret: "));
	if (i == 8)
		i = 0;
	m_contact[i] = new_contact;
	i++;
}