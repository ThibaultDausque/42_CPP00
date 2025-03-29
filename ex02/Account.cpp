/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdausque <tdausque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:37:52 by thibault          #+#    #+#             */
/*   Updated: 2025/03/29 12:37:06 by tdausque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initialDeposit)
{
	_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	this->_nbAccounts++;
	this->_nbWithdrawals = 0;
	this->_amount = initialDeposit;
	std::cout << ";created";
}

Account::~Account(void)
{

}

void	Account::_displayTimestamp(void)
{
	std::time_t	timestamp = time(NULL);
	std::tm*	datetime = localtime(&timestamp);

	char	tab[20];
	std::strftime(tab, 20, "[%Y%m%d_%H%M%S]", datetime);
	std::cout << tab;
}
