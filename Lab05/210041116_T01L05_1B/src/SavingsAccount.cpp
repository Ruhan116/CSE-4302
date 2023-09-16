#include "SavingsAccount.h"
#include <iostream>

SavingsAccount::SavingsAccount(double balance, double interest)
{
    SetsavingsBalance(balance);
    SetannualInterest(interest);
}

SavingsAccount::~SavingsAccount()
{
    ObjectCount++;
    std::cout << "Object " << ObjectCount << " destroyed" << std::endl;
}

void SavingsAccount::calculateMonthlyInterest()
{
    savingsBalance += savingsBalance*annualInterest/12.0;
}
