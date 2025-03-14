/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 22:08:31 by thibault          #+#    #+#             */
/*   Updated: 2025/03/14 20:12:23 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	public:
	Contact();
	~Contact();
	std::string	get_fname();
	std::string	get_lname();
	std::string	get_nname();
	int			get_num();
	std::string	get_darksec();
	void		set_fname(std::string str);
	void		set_lname(std::string str);
	void		set_nname(std::string str);
	void		set_num(int nb);
	void		set_darksec(std::string str);

	private:
	std::string	m_first_name;
	std::string	m_last_name;
	std::string	m_nickname;
	int			m_phone_num;
	std::string	m_dark_secret;
};

#endif