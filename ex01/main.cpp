/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 22:24:08 by thibault          #+#    #+#             */
/*   Updated: 2025/04/12 17:03:29 by tdausque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	std::string	input;
	PhoneBook	phonebook;
	
	
	while (input != "EXIT")
	{
		if (input.empty())
		{
			std::cout << "Enter a command > ";
			if (!std::getline(std::cin, input))
				break ;
		}
		if (input == "ADD")
		{
			phonebook.add_contact();
			input.clear();
		}
		else if(input == "SEARCH")
		{
			phonebook.search_contact();
			input.clear();
		}
		else if (input == "EXIT")
			break ;
		else
			input.clear();
	}
	return (0);
}
