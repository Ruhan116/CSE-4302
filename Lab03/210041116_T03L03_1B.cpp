#include <iostream>

using namespace std;

class bank_account{
private:
    string name;
    string account_number;
    string account_type;
    long double balance_amount = 0;
public:
    void customerDetails(string name, string account_number){
        this->name = name;
        this->account_number = account_number;
    }
    void accountType(string account_type){
        if(account_type == "Current" || account_type == "Savings"){
            this->account_type = account_type;
        }
        else{
            cout << "Invalid account type" << endl;
        }
    }
    void balance(){
        cout << "Balance: Tk "<< balance_amount << endl;
    }
    void deposit(long double amount){
        balance_amount += amount;
    }
    void withdraw(long double amount){
        balance_amount -= amount;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Account Number: "<< account_number << endl;
        cout << "Account Type: "<< account_type << endl;
        balance();
    }
};

int main(){
    bank_account myBank;
    cout << "Creating account for Ruhan with account number 210041116" << endl;
    myBank.customerDetails("Ruhan", "210041116");
    cout << "Setting account type to Invalid (Money Glitch)" << endl;
    myBank.accountType("Money Glitch");
    cout << "Setting valid account type (Savings)" << endl;
    myBank.accountType("Savings");
    cout << "Displaying account details: "<< endl;
    myBank.display();
    cout << "Depositing Tk 500.25" << endl;
    myBank.deposit(500.25);
    myBank.balance();
    cout << "Withdrawing Tk 116.25" << endl;
    myBank.withdraw(116.25);
    myBank.display(); 
}