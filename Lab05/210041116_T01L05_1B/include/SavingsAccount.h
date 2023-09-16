#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H


class SavingsAccount
{
    public:
        SavingsAccount(double balance, double interest);
        ~SavingsAccount();

        double GetsavingsBalance() { return savingsBalance; }
        void SetsavingsBalance(double val) { savingsBalance = val; }
        static double GetannualInterest() { return annualInterest; }
        void SetannualInterest(double val) { annualInterest = val; }

        void calculateMonthlyInterest();


    private:
        double savingsBalance;
        static double annualInterest;
        static int ObjectCount;
};

#endif // SAVINGSACCOUNT_H
