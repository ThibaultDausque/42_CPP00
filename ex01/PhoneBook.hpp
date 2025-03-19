/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 22:17:23 by thibault          #+#    #+#             */
/*   Updated: 2025/03/19 12:28:21 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include <iostream>
# include <string>
# include <iomanip>
# include <cstring>
# include "Contact.hpp"

class PhoneBook
{
	public:
	PhoneBook();
	~PhoneBook();
	void	add_contact(void);
	void	search_contact(void);
	void	get_contact(void);
	
	private:
	Contact			m_contact[8];
};

#endif