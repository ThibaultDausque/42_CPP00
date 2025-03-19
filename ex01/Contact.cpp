/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 20:21:13 by thibault          #+#    #+#             */
/*   Updated: 2025/03/19 12:12:47 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	
}

Contact::~Contact(void)
{
	return ;
}

std::string	Contact::get_fname()
{
	return (this->m_first_name);
}

std::string	Contact::get_lname()
{
	return (this->m_last_name);
}

std::string	Contact::get_nname()
{
	return (this->m_nickname);
}

std::string	Contact::get_num()
{
	return (this->m_phone_num);
}

std::string	Contact::get_darksec()
{
	return (this->m_dark_secret);
}

void	Contact::set_fname(std::string str)
{
	this->m_first_name = str;
}

void	Contact::set_lname(std::string str)
{
	this->m_last_name = str;
}

void	Contact::set_nname(std::string str)
{
	this->m_nickname = str;
}

void	Contact::set_num(std::string str)
{
	this->m_phone_num = str;
}

void	Contact::set_darksec(std::string str)
{
	this->m_dark_secret = str;
}

