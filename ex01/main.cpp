/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 22:24:08 by thibault          #+#    #+#             */
/*   Updated: 2025/03/12 22:31:00 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
// #include "Contact.hpp"

using namespace std;

int	main()
{
	string	input;
	while (1)
	{
		cout << "> ";
		cin >> input;
		if (input == "EXIT")
			break ;
	}
	return (0);
}