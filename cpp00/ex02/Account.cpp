#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    if (initial_deposit < 0)
        return;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_accountIndex = _nbAccounts;
    this->_amount = initial_deposit;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << " index:" << CYAN << this->_accountIndex
              << RESET << ";amount:" << CYAN << initial_deposit
              << RESET << ";created" << std::endl;
};

Account::~Account()
{
    _displayTimestamp();
    std::cout << " index:" << CYAN << this->_accountIndex
              << RESET << ";amount:" << CYAN << this->_amount
              << RESET << ";closed" << std::endl;
};

int Account::getNbAccounts()
{
    return Account::_nbAccounts;
};

int Account::getTotalAmount(void)
{
    return Account::_totalAmount;
};

int Account::getNbDeposits(void)
{
    return Account::_totalNbDeposits;
};

int Account::getNbWithdrawals(void)
{
    return Account::_totalNbWithdrawals;
};

int Account::checkAmount() const
{
    return this->_amount;
};

void Account::_displayTimestamp(void)
{
    std::time_t now = std::time(0);
    std::tm *timeStamp = std::localtime(&now);
    std::cout << "[" << YELLOW << timeStamp->tm_year + 1900
              << std::setw(2) << std::setfill('0') << timeStamp->tm_mon + 1
              << std::setw(2) << std::setfill('0') << timeStamp->tm_mday
              << "_" << std::setw(2) << std::setfill('0') << timeStamp->tm_hour
              << std::setw(2) << std::setfill('0') << timeStamp->tm_min
              << std::setw(2) << std::setfill('0') << timeStamp->tm_sec
              << RESET << "]";
};

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << " accounts:" << CYAN << _nbAccounts
              << RESET << ";total:" << CYAN << _totalAmount
              << RESET << ";deposits:" << CYAN << _totalNbDeposits
              << RESET << ";withdrawals:" << CYAN << _totalNbWithdrawals
              << RESET << std::endl;
};

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << " index:" << CYAN << this->_accountIndex
              << RESET << " amount:" << CYAN << this->_amount
              << RESET << ";deposits:" << CYAN << this->_nbDeposits
              << RESET << ";withdrawals:" << CYAN << this->_nbWithdrawals
              << RESET << std::endl;
};

void Account::makeDeposit(int deposit)
{
    if (deposit < 0)
        return;
    this->_nbDeposits++;
    this->_amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << " index:" << CYAN << this->_accountIndex
              << RESET << " p_amount:" << CYAN << this->_amount
              << RESET << ";deposit:" << CYAN << deposit
              << RESET << ";amount:" << CYAN << this->_amount
              << RESET << ";nb_deposits:" << CYAN << this->_nbDeposits
              << RESET << std::endl;
};

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << " index:" << CYAN << this->_accountIndex
              << RESET << " p_amount:" << CYAN << this->_amount
              << RESET << ";withdrawal:";
    if (withdrawal > this->_amount)
    {
        std::cout << RED << "refused" << RESET << std::endl;
        return false;
    }
    this->_nbWithdrawals++;
    this->_amount -= withdrawal;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    std::cout << CYAN << withdrawal
              << RESET << ";amoun:" << CYAN << this->_amount
              << RESET << ";nb_withdrawals:" << CYAN << this->_nbWithdrawals
              << RESET << std::endl;
    return true;
};