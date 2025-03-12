/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 22:08:31 by thibault          #+#    #+#             */
/*   Updated: 2025/03/12 22:21:53 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	private:
	std::string	m_first_name;
	std::string	m_last_name;
	std::string	m_nickname;
	int			m_phone_num;
	std::string	m_dark_secret;
};

Contact::Contact()
{
	
}

Contact::~Contact()
{
	
}
#endif