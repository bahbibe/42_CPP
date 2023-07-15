#include "Account.hpp"
#include <ctime>
#include <sstream>
#include <iostream>
#include <iomanip>

Account::Account(int initial_deposit){

};
Account::~Account()
{
	std::cout << "Destructor called" << std::endl;
};

void Account::displayAccountsInfos(){

};
void _displayTimestamp(void)
{
	std::time_t currentTime = std::time(0);
	std::tm *timeInfo = std::localtime(&currentTime);
	std::stringstream ss;
	std::cout << ss.str() << "[" << (timeInfo->tm_year + 1900)
			  << std::setw(2) << std::setfill('0') << (timeInfo->tm_mon + 1)
			  << std::setw(2) << std::setfill('0') << timeInfo->tm_mday
			  << "_" << std::setw(2) << std::setfill('0') << timeInfo->tm_hour
			  << std::setw(2) << std::setfill('0') << timeInfo->tm_min
			  << std::setw(2) << std::setfill('0') << timeInfo->tm_sec
			  << "]";
};
