/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 22:17:23 by thibault          #+#    #+#             */
/*   Updated: 2025/03/12 22:22:51 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include <iostream>
# include <string>

class PhoneBook
{
	public:
	PhoneBook(/* args */);
	~PhoneBook();
	
	private:
	int		nb_of_contact;
};

PhoneBook::PhoneBook(/* args */)
{
}

PhoneBook::~PhoneBook()
{
}
#endif