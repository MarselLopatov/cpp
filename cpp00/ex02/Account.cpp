/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdoria <cdoria@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:18:01 by cdoria            #+#    #+#             */
/*   Updated: 2022/10/04 21:11:00 by cdoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts++;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
}

Account::Account( void )
{
	_accountIndex = _nbAccounts++;
	_amount = _nbDeposits = _nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:;" << _amount << ";";
	std::cout << "created" << std::endl;
}

int Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawls:" << _totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp( void )
{
	time_t now = time(0);
	tm *ltm = localtime(&now);

	std::cout << "[" << 1900 + ltm->tm_year;
	std::cout << std::setfill('0') << std::setw(2) << 1 + ltm->tm_mon;
	std::cout << std::setw(2) << ltm->tm_mday;
	std::cout << "_" << std::setw(2) << ltm->tm_hour;
	std::cout << std::setw(2) << ltm->tm_min;
	std::cout << std::setw(2) << ltm->tm_sec << "] ";
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amout:" << (_amount += deposit) << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
	_totalAmount += deposit;
}

int		Account::checkAmount( void ) const
{
	if (_amount > 0)
		return (1);
	return (0);
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	if (_amount < withdrawal)
	{
		std::cout << "withdrawal:refused\n";
		return (false);
	}
	_totalNbWithdrawals++;
	_nbWithdrawals++;
	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << (_amount-=withdrawal) << ";";
	std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	_totalAmount -= withdrawal;
	return (true);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}
