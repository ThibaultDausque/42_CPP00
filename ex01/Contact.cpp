/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 20:21:13 by thibault          #+#    #+#             */
/*   Updated: 2025/03/14 20:42:52 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

using namespace std;

Contact::Contact(void)
{
	
}

Contact::~Contact(void)
{
	return ;
}

string	Contact::get_fname()
{
	return (this->m_first_name);
}

string	Contact::get_lname()
{
	return (this->m_last_name);
}

int	Contact::get_num()
{
	return (this->m_phone_num);
}

string	Contact::get_darksec()
{
	return (this->m_dark_secret);
}

void	Contact::set_fname(string str)
{
	this->m_first_name = str;
}

void	Contact::set_lname(string str)
{
	this->m_last_name = str;
}

void	Contact::set_nname(string str)
{
	this->m_nickname = str;
}

void	Contact::set_num(int num)
{
	this->m_phone_num = num;
}

void	Contact::set_darksec(string str)
{
	this->m_dark_secret = str;
}

