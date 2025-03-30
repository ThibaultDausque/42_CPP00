/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdausque <tdausque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:37:52 by thibault          #+#    #+#             */
/*   Updated: 2025/03/30 12:34:43 by tdausque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initialDeposit)
{
	this->_accountIndex = _nbAccounts;
	this->_nbAccounts++;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;
	this->_amount = initialDeposit;
	Account::_totalAmount += this->_amount;
	_displayTimestamp();
  std::cout << " index:" << this->_accountIndex;
  std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
}

Account::~Account(void)
{
  _displayTimestamp();
  std::cout << " index:" << this->_accountIndex;
  std::cout << ";amount:" << this->_amount;
  std::cout << ";closed" << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t	timestamp = time(NULL);
	std::tm*	datetime = localtime(&timestamp);

	char	tab[20];
	std::strftime(tab, 20, "[%Y%m%d_%H%M%S]", datetime);
	std::cout << tab;
}

int Account::getNbAccounts(void)
{
  return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
  return (_totalAmount);
}


int Account::getNbDeposits(void)
{
  return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
  return (Account::_totalNbWithdrawals);
}

void  Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts();
	std::cout << ";total:" << Account:: getTotalAmount();
	std::cout << ";deposits:" << Account::_totalNbDeposits;
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals;
	std::cout << std::endl;
}
void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposit:" << this->_nbDeposits;
	std::cout << std::endl;
	Account::_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	if (this->_amount < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << this->_amount;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals;
		std::cout << std::endl;
		return (true);
	}
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->checkAmount();
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}