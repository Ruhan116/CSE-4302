#include <iostream>
#include <SavingsAccount.h>

using namespace std;

double SavingsAccount :: annualInterest = 0;
int SavingsAccount :: ObjectCount = 0;

int main()
{
    SavingsAccount saver1(2000, 3), saver2(3000,3);

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << "Balance of Account1 : " << saver1.GetsavingsBalance() << endl;
    cout << "Balance of Account2 : " << saver2.GetsavingsBalance() << endl;

    saver1.SetannualInterest(4);

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << "Balance of Account1 : " << saver1.GetsavingsBalance() << endl;
    cout << "Balance of Account2 : " << saver2.GetsavingsBalance() << endl;

    return 0;
}
