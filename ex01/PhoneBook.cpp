/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 20:44:43 by thibault          #+#    #+#             */
/*   Updated: 2025/03/17 20:19:04 by thibault         ###   ########.fr       */
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
		std::cout << m_contact[i].get_fname();
		std::cout << "|";
		std::cout << std::endl;
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
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
	// new_contact.set_lname(get_input("last name: "));

	if (i == 7)
		i = 0;
	m_contact[i] = new_contact;
	i++;
}