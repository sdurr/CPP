// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Account.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/15 20:48:50 by sdurr             #+#    #+#             //
//   Updated: 2015/06/15 21:59:27 by sdurr            ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Account.class.hpp"

t::Accountx( int initial_deposits ){
	t::_totalNbDeposits = initial_deposits;
	t::_accountIndex += 1;

	return;
}

bool		t::makeWithdrawal( int withdrawal ) {
	t::_nbWithdrawals += 1;
	if (withdrawal > 0)
		return 1;
	return 0;
}

int			t::checkAmount( void ) const {
	return t::_amount;
}

void		t::displayStatus( void ) const {

}

void	t::_displayTimestamp( void ) {

}

int t::getNbAccounts( void ) {
	return t::_nbAccounts;
	}

int	t::getTotalAmount( void ) {
	return t::_totalAmount;
}

int t::getNbDeposits( void ){
	return t::_totalNbDeposits;
}

int t::getNbWithdrawals( void ){
	return t::_totalNbWithdrawals;
}

void t::displayAccountsInfos( void ){

}

void		t::makeDeposit( int deposit ){
	t::_totalNbDeposits += 1;
	t::_nbDeposits = deposit;
}


t::Account( void ) {
t::_nbAccounts += 1;
}

t::~Account( void ) {
	t::_nbAccounts -= 1;
}
